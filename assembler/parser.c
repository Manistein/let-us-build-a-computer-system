#include "parser.h"

#define MIN_LABEL_HT_SIZE 16

// The common header instruction of C-Instruction is "111"(binary value).
#define CI_SET_COMMON(i) { (i) = (0xffff) & (0xE000); }     

// The a bit must either be 0 or 1.
#define CI_SET_A_BIT(i, a) { (i) |= (0x1000) & (a << 12); } 

// c1~c6 must either be 0 or 1.
#define CI_SET_COMP_BITS(i, c1, c2, c3, c4, c5, c6) { (i) |=  (c1 << 11) | (c2 << 10) | (c3 << 9) | (c4 << 8) | (c5 << 7) | (c6 << 6); } 

// d1~d3 must eihter be 0 or 1.
#define CI_SET_D_BITS(i, d1, d2, d3) { (i) |= (d1 << 5) | (d2 << 4) | (d3 << 3); } 

// j1~j3 must either be 0 or 1.
#define CI_SET_J_BITS(i, j1, j2, j3) { (i) |= (j1 << 2) | (j2 << 1) | (j1); } 

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

void parse(struct Context* context) {
	struct Token t;
	struct Token* t_ptr = &t;

	struct LabelHashTable ht;
	struct LabelHashTable* ht_ptr = &ht;

	label_hashtable_init(ht_ptr);

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
			default: { // C-Instruction ?
				struct Token next_token;
				struct Token* nt_ptr = &next_token;

				Instruction new_i = 0;
				BOOL is_break_loop = FALSE;

				for (;;) {
					next(context, nt_ptr);

					switch (nt_ptr->type) {
					case '=': {
						CI_SET_COMMON(new_i);

						if (t_ptr->type == 'A') {
						}
						else if (t_ptr->type == 'M') {

						}
						else if (t_ptr->type == 'D') {

						}
						else {
							LOG_ERROR("line:%d The character before '=' must either be 'A', 'M', or 'D'");
							abort();
						}


					} break;
					case '+': {

					} break;
					case '-': {

					} break;
					case '|': {

					} break;
					case '&': {

					} break;
					case ';': {

					} break;
					default: {

					} break;
					}

					if (is_break_loop) {
						break;
					}
				}
			} break;
		}
	}

	label_hashtable_uninit(ht_ptr);
}

void parser_uninit(struct Context* context) {
	lexer_uninit(context);
}