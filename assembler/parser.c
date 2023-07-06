#include "parser.h"

#define MIN_LABEL_HT_SIZE 16
#define MIN_TOKEN_STACK_SIZE 8

// The common header instruction of C-Instruction is "111"(binary value).
#define CI_SET_COMMON(i) { (i) = (0xffff) & (0xE000); }     

// The 'A' bit must either be 0 or 1.
#define CI_SET_A_BIT(i, a) { (i) |= (0x1000) & (a << 12); } 

// c1~c6 must either be 0 or 1.
#define CI_SET_COMP_BITS(i, c1, c2, c3, c4, c5, c6) { (i) |=  (c1 << 11) | (c2 << 10) | (c3 << 9) | (c4 << 8) | (c5 << 7) | (c6 << 6); } 

// d1~d3 must eihter be 0 or 1.
#define CI_SET_D_BITS(i, d1, d2, d3) { (i) |= (d1 << 5) | (d2 << 4) | (d3 << 3); } 

// j1~j3 must either be 0 or 1.
#define CI_SET_J_BITS(i, j1, j2, j3) { (i) |= (j1 << 2) | (j2 << 1) | (j1); } 

#define BINARY_OP(d, am) \
	if (ts_ptr->top != 1) { \
		LOG_ERROR("line:%d Binary operators must have got two operands."); \
		abort(); \
	} \
	int token_type = pop_token(ts_ptr); \
	next(context, t_ptr); \
	check_amd(context, token_type); \
	check_amd(context, t_ptr->type); \
	if (token_type == t_ptr->type) { \
		LOG_ERROR("line %d Syntax error: Operands of binary operators can't be the same."); \
		abort(); \
	} \
	if (token_type == 'M' || t_ptr->type == 'M') { \
		CI_SET_A_BIT(c_instruction, 1); \
	} \
	if (token_type == 'D') { \
		d; \
	} \
	else { \
		am; \
	} \

// -----------------------------------------------------------
// Label Hash Table
// -----------------------------------------------------------
struct Label {
	int hash;
	char* name;
	int name_size;
	int address;

	struct Label* next;
};

struct LabelHashTable {
	struct Label** hash_table;
	int table_size;
	int elements;
};

static void label_hashtable_init(struct LabelHashTable* ht) {
	ht->hash_table = NULL;
	ht->elements = 0;
	ht->table_size = 0;
}

static void label_hashtable_uninit(struct LabelHashTable* ht) {
	if (!ht->hash_table)
		return;

	for (int i = 0; i < ht->elements; i++) {
		struct Label* label = ht->hash_table[i];

		while (label) {
			struct Label* next = label->next;

			free(label->name);
			free(label);

			label = next;
		}
	}
}

static struct Label* find_label(struct LabelHashTable* ht, const char* name) {
	if (!ht || !ht->hash_table)
		return NULL;

	int hash = str_hash(name);
	int index = hash % ht->table_size;

	struct Label* node = ht->hash_table[index];
	while (node) {
		struct Label* next = node->next;

		if (strcmp(node->name, name) == 0) {
			return node;
		}

		node = next;
	}

	return NULL;
}

static void label_ht_rehash(struct LabelHashTable* ht) {
	if (!ht->hash_table) {
		ht->hash_table = (struct Label**)malloc(sizeof(struct Label*) * MIN_LABEL_HT_SIZE);

		for (int i = 0; i < MIN_LABEL_HT_SIZE; i++) {
			ht->hash_table[i] = NULL;
		}

		ht->table_size = MIN_LABEL_HT_SIZE;
		ht->elements = 0;
	}
	else {
		int new_size = ht->table_size * 2;
		new_size = new_size > (INT_MAX / 2) ? (INT_MAX / 2) : new_size;

		struct Label** new_ht = (struct Label**)malloc(sizeof(struct Label*) * new_size);
		assert(new_ht);

		memset(new_ht, 0, sizeof(struct Label*) * new_size);

		for (int i = 0; i < ht->table_size; i++) {
			struct Label* lb = ht->hash_table[i];
			int index = lb->hash % new_size;

			struct Label* head = new_ht[index];
			lb->next = head;
			new_ht[index] = lb;
		}

		struct Label** old_ht = ht->hash_table;
		ht->hash_table = new_ht;
		ht->table_size = new_size;

		free(old_ht);
	}
}

static void insert_label(struct LabelHashTable* ht, const char* name, int address) {
	if (ht->elements + 1 > ht->table_size) {
		label_ht_rehash(ht);
	}

	int name_len = strlen(name);
	struct Label* label = (struct Label*)malloc(sizeof(struct Label));
	assert(label);

	label->name = (char*)malloc(sizeof(char) * (name_len + 1));
	assert(label->name);

	strcpy(label->name, name);
	label->name[name_len] = '\0';

	label->name_size = name_len;
	label->hash = str_hash(name);

	int index = label->hash % ht->table_size;
	struct Label* head = ht->hash_table[index];

	label->next = head;
	ht->hash_table[index] = label;

	ht->elements++;
}

// -----------------------------------------------------------
// The token stack used to construct C-Instructions
// -----------------------------------------------------------
struct TokenStack {
	int* stack;
	int stack_size;
	int top;
};

static void token_stack_init(struct TokenStack* ts) {
	if (!ts) 
		return;

	ts->stack = NULL;
	ts->stack_size = 0;
	ts->top = 0;
}

static void token_stack_uninit(struct TokenStack* ts) {
	if (!ts || !ts->stack) {
		return;
	}

	free(ts->stack);
}

static void push_token(struct TokenStack* ts, int token_type) {
	if (ts->top >= ts->stack_size) {
		if (ts->stack) {
			int new_size = ts->stack_size * 2;
			new_size = new_size > INT_MAX / 2 ? INT_MAX / 2 : new_size;

			int* stack = (int*)malloc(sizeof(int) * new_size);
			for (int i = 0; i < ts->stack_size; i++) {
				stack[i] = ts->stack[i];
			}

			free(ts->stack);
			ts->stack = stack;
			ts->stack_size = new_size;
		}
		else {
			ts->stack = (int*)malloc(sizeof(int) * MIN_TOKEN_STACK_SIZE);
			ts->stack_size = MIN_TOKEN_STACK_SIZE;
		}
	}

	ts->stack[ts->top] = token_type;
	ts->top++;
}

static int pop_token(struct TokenStack* ts) {
	if (ts->top > 0) {
		int token = ts->stack[ts->top - 1];
		ts->top--;
		return token;
	}
	else {
		return TK_INVALID;
	}
}

static void codecache_init(struct Context* context) {
	context->cache.current_pos = 0;
}

static void append_instruction(struct Context* context, Instruction instruction) {
	context->cache.code[context->cache.current_pos] = instruction;
	context->cache.current_pos++;

	if (context->cache.current_pos >= MAX_CODE_CACHE_SIZE) {
		for (int i = 0; i < MAX_CODE_CACHE_SIZE; i++) {
			if (i > 0) {
				fwrite(" ", sizeof(char), 1, context->executable_file);
			}

			Instruction inst = context->cache.code[i];

			char hexbuf[4] = { 0 };
			sprintf(hexbuf, "%x", inst);
			fwrite(hexbuf, sizeof(Instruction), 1, context->executable_file);
		}

		fwrite("\n", sizeof(char), 1, context->executable_file);
		context->cache.current_pos = 0;
	}

	context->address++;
}

BOOL context_init(struct Context* context, const char* asm_file, const char* executable_file) {
	context->linenumber = 1;
	context->cache.current_pos = 0;

	context->executable_file = NULL;

	if (!codeloader_init(context, asm_file)) {
		LOG_ERROR("init_codelader fail");
		return FALSE;
	}

	codecache_init(context);

	FILE* f = fopen(executable_file, "a+");
	if (!f)
		return FALSE;

	context->executable_file = f;
	context->address = 0;

	return TRUE;
}

void context_uninit(struct Context* context) {
	if (!context) 
		return;

	if (context->executable_file)
		fclose(context->executable_file);

	codeloader_uninit(context);
}

BOOL parser_init(struct Context* context) {
	if (!lexer_init(context)) {
		return FALSE;
	}

	return TRUE;
}

static void check_amd(struct Context* context, int token_type) {
	if (token_type != 'A' && token_type != 'M' && token_type != 'D') {
		LOG_ERROR("line:%d Operands of unary or binary operators must be an 'A', 'M' or 'D'", context->linenumber);
		abort();
	}
}

static void try_process_jump(struct Context* context, struct Token* token, short* inst_ptr) {
	if (token->type != ';') {
		return;
	}

	next(context, token);
	BOOL is_jump = FALSE;
	for (int i = TK_JGT; i < TK_GOTO; i++) {
		if (token->type == i) {
			is_jump = TRUE;
			break;
		}
	}

	if (!is_jump) {
		LOG_ERROR("line:%d There must be a jump instruction following the ';'", context->linenumber);
		abort();
		return;
	}

	switch (token->type) {
		case TK_JGT: {
			CI_SET_J_BITS(*inst_ptr, 0, 0, 1);
		} break;
		case TK_JEQ: {
			CI_SET_J_BITS(*inst_ptr, 0, 1, 0);
		} break;
		case TK_JGE: {
			CI_SET_J_BITS(*inst_ptr, 0, 1, 1);
		} break;
		case TK_JLT: {
			CI_SET_J_BITS(*inst_ptr, 1, 0, 0);
		} break;
		case TK_JNE: {
			CI_SET_J_BITS(*inst_ptr, 1, 0, 1);
		} break;
		case TK_JLE: {
			CI_SET_J_BITS(*inst_ptr, 1, 1, 0);
		} break;
		case TK_JMP: {
			CI_SET_J_BITS(*inst_ptr, 1, 1, 1);
		} break;
		default: break;
	}

	next(context, token);
}

void parse(struct Context* context) {
	struct Token t;
	struct Token* t_ptr = &t;

	struct LabelHashTable ht;
	struct LabelHashTable* ht_ptr = &ht;

	label_hashtable_init(ht_ptr);

	struct TokenStack ts;
	struct TokenStack* ts_ptr;
	token_stack_init(ts_ptr);

	BOOL is_file_end = FALSE;

	for (;;) {
		next(context, t_ptr);

		switch (t_ptr->type) {
			case '@': { // A-Instruction
				next(context, t_ptr);

				switch (t_ptr->type) {
					case TK_NUMBER: {
						append_instruction(context, t_ptr->number & 0x7FFF);
					} break;
					case TK_VAR: {
						struct Label* label = find_label(ht_ptr, t_ptr->buf);
						if (!label) {
							LOG_ERROR("line:%d The label named %s is not exist", context->linenumber, t_ptr->buf);
							abort();
						}

						append_instruction(context, label->address);
					} break;
					default: {
						LOG_ERROR("line:%d The token '@' must be followed by numbers or a variable to construct A-Instruction.", context->linenumber);
						abort();
					} break;
				}
			} break;
			case TK_LABEL: {
				insert_label(ht_ptr, t_ptr->buf, context->address);
			} break;
			case TK_GOTO: {
				next(context, t_ptr);

				if (t_ptr->type != TK_VAR) {
					LOG_ERROR("line %d The GOTO command must be followed by variable.", context->linenumber);
					abort();
				}

				struct Label* label = find_label(ht_ptr, t_ptr->buf);
				if (!label) {
					LOG_ERROR("line:%d Undefine variable %s.", context->linenumber, t_ptr->buf);
					abort();
				}

				append_instruction(context, label->address);

				Instruction jump;
				CI_SET_COMMON(jump);
				CI_SET_A_BIT(jump, 0);
				CI_SET_COMP_BITS(jump, 1, 0, 1, 0, 1, 0);
				CI_SET_D_BITS(jump, 0, 0, 0);
				CI_SET_J_BITS(jump, 1, 1, 1);

				append_instruction(context, jump);
			} break;
			case EOF: {
				is_file_end = TRUE;
			} break;
			default: { // C-Instruction ?
				Instruction c_instruction = 0;
				CI_SET_COMMON(c_instruction);
				BOOL can_break;

				for (;;) {
					switch (t_ptr->type) {
						case 'A': case 'D': case 'M': {
							push_token(ts_ptr, t_ptr->type);
							next(context, t_ptr);
						} break;
						case '=': {
							if (ts_ptr->top <= 0 || ts_ptr->top > 3) {
								LOG_ERROR("line %d Syntax error: There must be an 'A', 'M' or 'D' token on the left of '=' and the amount of tokens can't greater than 3.",
									context->linenumber);
								abort();
							}

							int top_token = TK_INVALID;
							while (top_token = pop_token(ts_ptr)) {
								switch (top_token) {
								case 'A': {
									CI_SET_D_BITS(c_instruction, 1, 0, 0);
								} break;
								case 'M': {
									CI_SET_D_BITS(c_instruction, 0, 0, 1);
								} break;
								case 'D': {
									CI_SET_D_BITS(c_instruction, 0, 1, 0);
								} break;
								default: {
									check_amd(context, top_token);
								} break;
								}
							}

							next(context, t_ptr);
						} break;
						case '+': {
							BINARY_OP(CI_SET_COMP_BITS(c_instruction, 0, 0, 0, 0, 1, 0), CI_SET_COMP_BITS(c_instruction, 0, 0, 0, 0, 1, 0));
							try_process_jump(context, t_ptr, &c_instruction);
							can_break = TRUE;
						} break;
						case '&': {
							BINARY_OP(CI_SET_COMP_BITS(c_instruction, 0, 0, 0, 0, 0, 0), CI_SET_COMP_BITS(c_instruction, 0, 0, 0, 0, 0, 0));
							try_process_jump(context, t_ptr, &c_instruction);
							can_break = TRUE;
						} break;
						case '|': {
							BINARY_OP(CI_SET_COMP_BITS(c_instruction, 0, 1, 0, 1, 0, 1), CI_SET_COMP_BITS(c_instruction, 0, 1, 0, 1, 0, 1));
							try_process_jump(context, t_ptr, &c_instruction);
							can_break = TRUE;
						} break;
						case '-': {
							if (ts_ptr->top > 0) {
								if (ts_ptr->top > 1) {
									LOG_ERROR("line %d Syntax error: Too many tokens on the left of the '-'.", context->linenumber);
									abort();
								}

								BINARY_OP(CI_SET_COMP_BITS(c_instruction, 0, 1, 0, 0, 1, 1), CI_SET_COMP_BITS(c_instruction, 0, 0, 0, 1, 1, 1));
							}
							else {
								next(context, t_ptr);

								switch (t_ptr->type) {
									case 'A': {
										CI_SET_A_BIT(c_instruction, 0);
										CI_SET_COMP_BITS(c_instruction, 1, 1, 0, 0, 1, 1);
									} break;
									case 'D': {
										CI_SET_A_BIT(c_instruction, 0);
										CI_SET_COMP_BITS(c_instruction, 0, 0, 1, 1, 1, 1);
									} break;
									case 'M': {
										CI_SET_A_BIT(c_instruction, 1);
										CI_SET_COMP_BITS(c_instruction, 1, 1, 0, 0, 1, 1);
									} break;
									default: {
										LOG_ERROR("line %d Syntax error: there must be an 'A', 'M' or 'D' token following the '-'.", context->linenumber);
										abort();
									} break;
								}
							}

							next(context, t_ptr);
							try_process_jump(context, t_ptr, &c_instruction);

							can_break = TRUE;
						} break;
						case '!': {
							if (ts_ptr->top > 0) {
								LOG_ERROR("line %d Syntax error: You can't write any token before unary operators.", context->linenumber);
								abort();
							}

							next(context, t_ptr);
							check_amd(context, t_ptr->type);

							if (t_ptr->type == 'A') {
								CI_SET_A_BIT(c_instruction, 0);
								CI_SET_COMP_BITS(c_instruction, 1, 1, 0, 0, 0, 1);
							}
							else if (t_ptr->type == 'M') {
								CI_SET_A_BIT(c_instruction, 1);
								CI_SET_COMP_BITS(c_instruction, 1, 1, 0, 0, 0, 1);
							}
							else {
								CI_SET_A_BIT(c_instruction, 0);
								CI_SET_COMP_BITS(c_instruction, 0, 0, 1, 1, 0, 1);
							}

							next(context, t_ptr);
							try_process_jump(context, t_ptr, &c_instruction);

							can_break = TRUE;
						} break;
						default: {
							LOG_ERROR("line %d Syntax error.", context->linenumber);
							abort();
						} break;
					}

					if (can_break)
						break;
				}
			} break;
		}

		if (is_file_end) {
			break;
		}
	}

	token_stack_uninit(ts_ptr);
	label_hashtable_uninit(ht_ptr);
}

void parser_uninit(struct Context* context) {
	lexer_uninit(context);
}