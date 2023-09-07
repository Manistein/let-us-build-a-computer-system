#include "statement.h"
#include <assert.h>

#define MIN_TOKEN_STACK_SIZE 8
#define MIN_LABEL_HT_SIZE 16

// The common header instruction of C-Instruction is "111"(binary value).
#define CI_SET_COMMON(i) { (i) = (0xffff) & (0xE000); }     

// The 'A' bit must either be 0 or 1.
#define CI_SET_A_BIT(i, a) { (i) |= (0x1000) & (a << 12); } 

// c1~c6 must either be 0 or 1.
#define CI_SET_COMP_BITS(i, c1, c2, c3, c4, c5, c6) { (i) |=  (c1 << 11) | (c2 << 10) | (c3 << 9) | (c4 << 8) | (c5 << 7) | (c6 << 6); } 

// d1~d3 must eihter be 0 or 1.
#define CI_SET_D_BITS(i, d1, d2, d3) { (i) |= (d1 << 5) | (d2 << 4) | (d3 << 3); } 

// j1~j3 must either be 0 or 1.
#define CI_SET_J_BITS(i, j1, j2, j3) { (i) |= (j1 << 2) | (j2 << 1) | (j3); } 

void check_amd(struct Context* context, int token_type);
BOOL is_amd(struct Token* token);

// ------------------------------------------------------------------------------
// Instruction
// ------------------------------------------------------------------------------

static int append_instruction(struct Context* context, Instruction instruction) {
	if (!context->cache.code || context->cache.current_pos >= context->cache.size) {
		int new_size = context->cache.size * 2;
		new_size = new_size < (INT_MAX / 2) ? new_size : (INT_MAX / 2);
		new_size = new_size > 0 ? new_size : MAX_CODE_CACHE_SIZE;

		context->cache.code = (Instruction*)realloc(context->cache.code, sizeof(Instruction) * new_size);
		if (!context->cache.code) {
			LOG_ERROR("There is not enough memory for allocing a new block.");
			exit(1);
		}

		context->cache.size = new_size;
	}

	context->cache.code[context->cache.current_pos] = instruction;
	context->cache.current_pos++;
	context->address++;

	return context->cache.current_pos - 1;
}

static void dump_instructions(struct Context* context) {
	const char* hex_radix_str = "memory_initialization_radix=16;\n";
	fwrite(hex_radix_str, sizeof(char), strlen(hex_radix_str), context->executable_file);

	const char* vector_name = "memory_initialization_vector=\n";
	fwrite(vector_name, sizeof(char), strlen(vector_name), context->executable_file);

	for (int i = 0; i < context->cache.current_pos; i++) {
		if (i > 0) {
			fwrite(",", sizeof(char), 1, context->executable_file);
		}

		Instruction inst = context->cache.code[i];

		char hexbuf[3] = { 0 };
		sprintf(hexbuf, "%02x", (inst & 0xff00) >> 8);
		fwrite(hexbuf, 2, 1, context->executable_file);

		sprintf(hexbuf, "%02x", (inst & 0x00ff));
		fwrite(hexbuf, 2, 1, context->executable_file);
	}
	fwrite(";", 1, 1, context->executable_file);

	fflush(context->executable_file);
}

// ------------------------------------------------------------------------------
// Token Stack
// ------------------------------------------------------------------------------

static void token_stack_init(struct Context* context) {
	context->token_stack = (struct TokenStack*)malloc(sizeof(struct TokenStack));
	assert(context->token_stack);

	context->token_stack->stack = NULL;
	context->token_stack->stack_size = 0;
	context->token_stack->top = 0;
}

static void token_stack_uninit(struct Context* context) {
	if (!context->token_stack || !context->token_stack->stack) {
		return;
	}

	free(context->token_stack->stack);
	free(context->token_stack);
	context->token_stack = NULL;
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

// ------------------------------------------------------------------------------
// Label
// ------------------------------------------------------------------------------

#define FIND_LABEL_COMMON(type, ht, name) {\
	if (!ht || !ht->hash_table) \
		return NULL; \
	int hash = str_hash(name);	\
	int index = hash % ht->table_size; \
	type* node = ht->hash_table[index]; \
	while (node) { \
		type* next = node->next; \
		if (strcmp(node->name, name) == 0) { \
			return node; \
		} \
		node = next; \
	} \
	return NULL; \
}

#define LABEL_REHASH_COMMON(type, ht) { \
	if (!ht->hash_table) { \
		ht->hash_table = (type**)malloc(sizeof(type*) * MIN_LABEL_HT_SIZE); \
		for (int i = 0; i < MIN_LABEL_HT_SIZE; i++) { \
			ht->hash_table[i] = NULL; \
		} \
		ht->table_size = MIN_LABEL_HT_SIZE;  \
		ht->elements = 0; \
	} \
	else { \
		int new_size = ht->table_size * 2; \
		new_size = new_size > (INT_MAX / 2) ? (INT_MAX / 2) : new_size; \
		type** new_ht = (type**)malloc(sizeof(type*) * new_size); \
		memset(new_ht, 0, sizeof(type*) * new_size); \
		for (int i = 0; i < ht->table_size; i++) { \
			type* lb = ht->hash_table[i]; \
			int index = lb->hash % new_size; \
			type* head = new_ht[index]; \
			lb->next = head; \
			new_ht[index] = lb; \
		} \
		type** old_ht = ht->hash_table; \
		ht->hash_table = new_ht; \
		ht->table_size = new_size; \
		free(old_ht); \
	} \
}

static void label_hashtable_init(struct Context* context) {
	context->label_ht = (struct LabelHashTable*)malloc(sizeof(struct LabelHashTable));
	assert(context->label_ht);

	context->label_ht->hash_table = NULL;
	context->label_ht->elements = 0;
	context->label_ht->table_size = 0;
}

static void label_hashtable_uninit(struct Context* context) {
	if (!context->label_ht || !context->label_ht->hash_table)
		return;

	for (int i = 0; i < context->label_ht->elements; i++) {
		struct Label* label = context->label_ht->hash_table[i];

		while (label) {
			struct Label* next = label->next;

			free(label->name);
			free(label);

			label = next;
		}
	}

	free(context->label_ht);
	context->label_ht = NULL;
}

static struct Label* find_label(struct LabelHashTable* ht, const char* name) {
	FIND_LABEL_COMMON(struct Label, ht, name);
}

static void label_ht_rehash(struct LabelHashTable* ht) {
	LABEL_REHASH_COMMON(struct Label, ht);
}

static void insert_label(struct LabelHashTable* ht, const char* name, unsigned short address) {
	if (ht->elements + 1 > ht->table_size) {
		label_ht_rehash(ht);
	}

	int name_len = strlen(name);
	struct Label* label = (struct Label*)malloc(sizeof(struct Label));
	label->name = (char*)malloc(sizeof(char) * (name_len + 1));

	strcpy(label->name, name);
	label->name[name_len] = '\0';

	label->name_size = name_len;
	label->hash = str_hash(name);
	label->address = address;

	int index = label->hash % ht->table_size;
	struct Label* head = ht->hash_table[index];

	label->next = head;
	ht->hash_table[index] = label;

	ht->elements++;
}

static void undefine_label_hashtable_init(struct Context* context) {
	context->undefine_label_ht = (struct UndefineLabelHashTable*)malloc(sizeof(struct UndefineLabelHashTable));
	assert(context->undefine_label_ht);

	context->undefine_label_ht->hash_table = NULL;
	context->undefine_label_ht->elements = 0;
	context->undefine_label_ht->table_size = 0;
}

static void undefine_label_hashtable_uninit(struct Context* context) {
	if (!context->undefine_label_ht || !context->undefine_label_ht->hash_table)
		return;

	for (int i = 0; i < context->undefine_label_ht->elements; i++) {
		struct UndefineLabel* label = context->undefine_label_ht->hash_table[i];

		while (label) {
			struct UndefineLabel* next = label->next;

			struct JumpInstruction* head = label->head;
			while (head) {
				struct JumpInstruction* next_jump_instruction = head->next;
				free(head);

				head = next_jump_instruction;
			}

			free(label->name);
			free(label);

			label = next;
		}
	}

	free(context->undefine_label_ht);
	context->undefine_label_ht = NULL;
}

static struct UndefineLabel* find_undefine_label(struct UndefineLabelHashTable* ht, const char* name) {
	FIND_LABEL_COMMON(struct UndefineLabel, ht, name);
}

static void undefine_label_rehash(struct UndefineLabelHashTable* ht) {
	LABEL_REHASH_COMMON(struct UndefineLabel, ht);
}

static void append_undefine_jump_instruction(struct Context* context, const char* label_name, unsigned short address, int linenumber) {
	struct UndefineLabel* undefine_label = find_undefine_label(context->undefine_label_ht, label_name);
	if (!undefine_label) {
		undefine_label = (struct UndefineLabel*)malloc(sizeof(struct UndefineLabel));
		assert(undefine_label);

		int name_len = strlen(label_name);
		undefine_label->name = (char*)malloc(sizeof(char) * (name_len + 1));
		strcpy(undefine_label->name, label_name);
		undefine_label->name[name_len] = '\0';
		undefine_label->name_size = name_len;
		undefine_label->hash = str_hash(label_name);
		undefine_label->head = NULL;
		undefine_label->has_adjust = FALSE;

		if (!context->undefine_label_ht->elements >= context->undefine_label_ht->table_size) {
			undefine_label_rehash(context->undefine_label_ht);
		}

		int index = undefine_label->hash % context->undefine_label_ht->table_size;
		struct UndefineLabel* head = context->undefine_label_ht->hash_table[index];
		undefine_label->next = head;
		context->undefine_label_ht->hash_table[index] = undefine_label;
	}

	struct JumpInstruction* jhead = undefine_label->head;
	struct JumpInstruction* njhead = (struct JumpInstruction*)malloc(sizeof(struct JumpInstruction));
	njhead->instruction_index = address;
	njhead->linenumber = linenumber;
	njhead->next = jhead;

	undefine_label->head = njhead;
}

static void adjust_undefine_labels(struct Context* context) {
	for (int i = 0; i < context->label_ht->table_size; i++) {
		struct Label* l = context->label_ht->hash_table[i];
		while (l) {
			struct Label* lnext = l->next;

			struct UndefineLabel* ul = find_undefine_label(context->undefine_label_ht, l->name);
			if (ul) {
				struct JumpInstruction* ji = ul->head;
				while (ji) {
					struct JumpInstruction* jinext = ji->next;

					context->cache.code[ji->instruction_index] = l->address & 0x7fff;

					ji = jinext;
				}

				ul->has_adjust = TRUE;
			}

			l = lnext;
		}
	}
}

static void check_undefine_labels(struct Context* context) {
	for (int i = 0; i < context->undefine_label_ht->table_size; i ++) {
		struct UndefineLabel* ul = context->undefine_label_ht->hash_table[i];
		while (ul) {
			struct UndefineLabel* ulnext = ul->next;
			struct JumpInstruction* jh = ul->head;
			
			int linenumber = 0;
			if (jh) {
				linenumber = jh->linenumber;
			}

			if (!ul->has_adjust) {
				LOG_ERROR("line:%d Syntax error: unknow label %s", linenumber, ul->name);
				exit(1);
			}

			ul = ulnext;
		}
	}
}

// ------------------------------------------------------------------------------
// Expressions
// ------------------------------------------------------------------------------

static void jump_expr(struct Context* context, struct Token* token, Instruction* instruction) {
	if (token->type != ';') {
		LOG_ERROR("line:%d Syntax Error: A jump instruction must be started with a ';'.", context->linenumber);
		exit(0);
	}

	lexer_next(context, token); // skip ';'

	switch (token->type) {
	case TK_JGT: {
		CI_SET_J_BITS(*instruction, 0, 0, 1);
	} break;
	case TK_JEQ: {
		CI_SET_J_BITS(*instruction, 0, 1, 0);
	} break;
	case TK_JGE: {
		CI_SET_J_BITS(*instruction, 0, 1, 1);
	} break;
	case TK_JLT: {
		CI_SET_J_BITS(*instruction, 1, 0, 0);
	} break;
	case TK_JNE: {
		CI_SET_J_BITS(*instruction, 1, 0, 1);
	} break;
	case TK_JLE: {
		CI_SET_J_BITS(*instruction, 1, 1, 0);
	} break;
	case TK_JMP: {
		CI_SET_J_BITS(*instruction, 1, 1, 1);
	} break;
	default: {
		LOG_ERROR("line:%d Syntax Error:Unknow jump instruction.", context->linenumber);
		exit(0);
	} break;
	}
}

static void unary_expr(struct Context* context, struct Token* token, Instruction* instruction) {
	switch (token->type) {
	case '!': {
		lexer_next(context, token);
		switch (token->type) {
		case 'A': { // !A
			CI_SET_A_BIT(*instruction, 0);
			CI_SET_COMP_BITS(*instruction, 1, 1, 0, 0, 0, 1);
		} break;
		case 'M': { // !M
			CI_SET_A_BIT(*instruction, 1);
			CI_SET_COMP_BITS(*instruction, 1, 1, 0, 0, 0, 1);
		} break;
		case 'D': { // !D
			CI_SET_A_BIT(*instruction, 0);
			CI_SET_COMP_BITS(*instruction, 0, 0, 1, 1, 0, 1);
		} break;
		default: {
			LOG_ERROR("line:%d Syntax Error: There must be an 'A', 'M' or 'D' token following the token '!'", context->linenumber);
			exit(0);
		} break;
		}

	} break;
	case '-': {
		lexer_next(context, token);
		switch (token->type) {
		case 'A': { // -A
			CI_SET_A_BIT(*instruction, 0);
			CI_SET_COMP_BITS(*instruction, 1, 1, 0, 0, 1, 1);
		} break;
		case 'M': { // -M
			CI_SET_A_BIT(*instruction, 1);
			CI_SET_COMP_BITS(*instruction, 1, 1, 0, 0, 1, 1);
		} break;
		case 'D': { // -D
			CI_SET_A_BIT(*instruction, 0);
			CI_SET_COMP_BITS(*instruction, 0, 0, 1, 1, 1, 1);
		} break;
		case TK_NUMBER: {
			if (token->number == 1) { // -1
				CI_SET_A_BIT(*instruction, 0);
				CI_SET_COMP_BITS(*instruction, 1, 1, 1, 0, 1, 0);
			}
			else {
				LOG_ERROR("line:%d Syntax Error: Unknow unary instuction", context->linenumber);
				exit(0);
			}
		} break;
		default: {
			LOG_ERROR("line:%d Syntax Error: Unknow unary instuction", context->linenumber);
			exit(0);
		} break;
		}
	} break;
	default: {
		LOG_ERROR("line:%d Syntax Error: Unsupport the unary operator %c", context->linenumber, token->type);
		exit(0);
	} break;
	}
}

static void check_binary_operands(struct Context* context, int left_operand, int right_operand) {
	if (left_operand == right_operand) {
		LOG_ERROR("line:%d Operands of a binary operator can't be the same.", context->linenumber);
		exit(0);
	}

	if ((left_operand == 'A' && right_operand == 'M') || (left_operand == 'M' && right_operand == 'A')) {
		LOG_ERROR("line:%d The instruction is invalid.", context->linenumber);
		exit(0);
	}
}

static void binary_expr(struct Context* context, int left_operand, struct Token* token, Instruction* instruction) {
	check_amd(context, left_operand);

	switch (token->type) {
	case '+': {
		lexer_next(context, token);
		if (is_amd(token)) {
			check_binary_operands(context, left_operand, token->type);

			if (left_operand == 'M' || token->type == 'M') {
				CI_SET_A_BIT(*instruction, 1); // D + M if 1 else D + A;
			}

			CI_SET_COMP_BITS(*instruction, 0, 0, 0, 0, 1, 0);
		}
		else if (token->type == TK_NUMBER) {
			if (token->number == 1) {
				switch (left_operand) {
				case 'A': { // A + 1
					CI_SET_A_BIT(*instruction, 0);
					CI_SET_COMP_BITS(*instruction, 1, 1, 0, 1, 1, 1);
				} break;
				case 'M': { // M + 1
					CI_SET_A_BIT(*instruction, 1);
					CI_SET_COMP_BITS(*instruction, 1, 1, 0, 1, 1, 1);
				} break;
				case 'D': { // D + 1
					CI_SET_A_BIT(*instruction, 0);
					CI_SET_COMP_BITS(*instruction, 0, 1, 1, 1, 1, 1);
				} break;
				default: {
					LOG_ERROR("line:%d Syntax Error: Unknow binary instruction.", context->linenumber);
					exit(0);
				} break;
				}
			}
			else {
				LOG_ERROR("line:%d Syntax Error: Unknow binary instruction.", context->linenumber);
				exit(0);
			}
		}
		else {
			LOG_ERROR("line:%d Syntax Error: Unknow binary instruction.", context->linenumber);
			exit(0);
		}
	} break;
	case '-': {
		lexer_next(context, token);

		if (is_amd(token)) {
			check_binary_operands(context, left_operand, token->type);

			if (left_operand == 'D') {
				if (token->type == 'A') { // D - A
					CI_SET_A_BIT(*instruction, 0);
					CI_SET_COMP_BITS(*instruction, 0, 1, 0, 0, 1, 1);
				}
				else { // D - M
					CI_SET_A_BIT(*instruction, 1);
					CI_SET_COMP_BITS(*instruction, 0, 1, 0, 0, 1, 1);
				}
			}
			else if (left_operand == 'A') { // A - D
				CI_SET_A_BIT(*instruction, 0);
				CI_SET_COMP_BITS(*instruction, 0, 0, 0, 1, 1, 1);
			}
			else if (left_operand == 'M') { // M - D
				CI_SET_A_BIT(*instruction, 1);
				CI_SET_COMP_BITS(*instruction, 0, 0, 0, 1, 1, 1);
			}
			else {
				LOG_ERROR("line:%d Syntax Error: Unknow binary instruction.", context->linenumber);
				exit(0);
			}
		}
		else if (token->type == TK_NUMBER) {
			if (token->number == 1) {
				switch (left_operand) {
				case 'A': { // A - 1
					CI_SET_A_BIT(*instruction, 0);
					CI_SET_COMP_BITS(*instruction, 1, 1, 0, 0, 1, 0);
				} break;
				case 'M': { // M - 1
					CI_SET_A_BIT(*instruction, 1);
					CI_SET_COMP_BITS(*instruction, 1, 1, 0, 0, 1, 0);
				} break;
				case 'D': { // D - 1
					CI_SET_A_BIT(*instruction, 0);
					CI_SET_COMP_BITS(*instruction, 0, 0, 1, 1, 1, 0);
				} break;
				default: {
					LOG_ERROR("line:%d Syntax Error: Unknow binary instruction.", context->linenumber);
					exit(0);
				} break;
				}
			}
			else {
				LOG_ERROR("line:%d Syntax Error: Unknow binary instruction.", context->linenumber);
				exit(0);
			}
		}
		else {
			LOG_ERROR("line:%d Syntax Error: Unknow binary instruction.", context->linenumber);
			exit(0);
		}
	} break;
	case '|': {
		lexer_next(context, token);

		if (is_amd(token)) {
			check_binary_operands(context, left_operand, token->type);

			if (left_operand == 'M' || token->type == 'M') {
				CI_SET_A_BIT(*instruction, 1);
			}

			CI_SET_COMP_BITS(*instruction, 0, 1, 0, 1, 0, 1);
		}
		else {
			LOG_ERROR("line:%d Syntax Error: Unknow binary instruction.", context->linenumber);
			exit(0);
		}
	} break;
	case '&': {
		lexer_next(context, token);

		if (is_amd(token)) {
			check_binary_operands(context, left_operand, token->type);

			if (left_operand == 'M' || token->type == 'M') {
				CI_SET_A_BIT(*instruction, 1);
			}

			CI_SET_COMP_BITS(*instruction, 0, 0, 0, 0, 0, 0);
		}
		else {
			LOG_ERROR("line:%d Syntax Error: Unknow binary instruction.", context->linenumber);
			exit(0);
		}
	} break;
	default: {
		LOG_ERROR("line:%d Syntax Error: Unknow binary instruction.", context->linenumber);
		exit(0);
	} break;
	}
}

static void simple_expr(struct Context* context, struct Token* token, Instruction* instruction) {
	int number = 0;
	if (token->type == TK_NUMBER) {
		if (token->number != 0 && token->number != 1) {
			LOG_ERROR("line:%d Syntax Error: Simple expr must be a '0', '1', 'A', 'M' or 'D' token.", context->linenumber);
			exit(0);
		}
		number = token->number;
	}
	else {
		check_amd(context, token->type);
	}

	if (token->type == TK_NUMBER) {
		if (number == 0) {
			CI_SET_A_BIT(*instruction, 0);
			CI_SET_COMP_BITS(*instruction, 1, 0, 1, 0, 1, 0);
		}
		else { // number == 1
			CI_SET_A_BIT(*instruction, 0);
			CI_SET_COMP_BITS(*instruction, 1, 1, 1, 1, 1, 1);
		}
	}
	else {
		switch (token->type) {
		case 'A': {
			CI_SET_A_BIT(*instruction, 0);
			CI_SET_COMP_BITS(*instruction, 1, 1, 0, 0, 0, 0);
		} break;
		case 'M': {
			CI_SET_A_BIT(*instruction, 1);
			CI_SET_COMP_BITS(*instruction, 1, 1, 0, 0, 0, 0);
		} break;
		case 'D': {
			CI_SET_A_BIT(*instruction, 0);
			CI_SET_COMP_BITS(*instruction, 0, 0, 1, 1, 0, 0);
		} break;
		default:break;
		}
	}
}

static void expr(struct Context* context, struct Token* token, Instruction* instruction) {
	if (token->type == '!' || token->type == '-') {
		unary_expr(context, token, instruction);
	}
	else {
		lexer_lookahead(context);

		if (context->look_ahead.type == '+' || context->look_ahead.type == '-' || context->look_ahead.type == '|' || context->look_ahead.type == '&') {
			int left_operand = token->type;

			lexer_next(context, token);
			binary_expr(context, left_operand, token, instruction);
		}
		else {
			simple_expr(context, token, instruction);
		}
	}
}

void address_statement(struct Context* context, struct Token* token) {
	lexer_next(context, token);

	switch (token->type) {
	case TK_NUMBER: {
		append_instruction(context, token->number & 0x7FFF);
	} break;
	case TK_VAR: {
		struct Label* label = find_label(context->label_ht, token->buf);
		if (label) {
			append_instruction(context, label->address);
		}
		else {
			unsigned short address = append_instruction(context, 0);
			append_undefine_jump_instruction(context, token->buf, address, context->linenumber);
		}
	} break;
	default: {
		LOG_ERROR("line:%d Syntax Error:The token '@' must be followed by numbers or a variable to construct A-Instruction.", context->linenumber);
		exit(0);
	} break;
	}

	lexer_next(context, token);
}

static BOOL is_amd(struct Token* token) {
	if (token->type == 'A' || token->type == 'M' || token->type == 'D') {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

static void check_amd(struct Context* context, int token_type) {
	if (token_type != 'A' && token_type != 'M' && token_type != 'D') {
		LOG_ERROR("line:%d Operands of unary or binary operators must be an 'A', 'M' or 'D'", context->linenumber);
		exit(0);
	}
}

static void amd_assign(struct Context* context, int token_type, Instruction* instruction) {
	switch (token_type) {
	case 'A': {
		CI_SET_D_BITS(*instruction, 1, 0, 0);
	} break;
	case 'M': {
		CI_SET_D_BITS(*instruction, 0, 0, 1);
	} break;
	case 'D': {
		CI_SET_D_BITS(*instruction, 0, 1, 0);
	} break;
	default: {
		check_amd(context, token_type);
	} break;
	}
}

void amd_statement(struct Context* context, struct Token* token) {
	Instruction instruction = 0;
	CI_SET_COMMON(instruction);

	while (is_amd(token)) {
		push_token(context->token_stack, token->type);
		lexer_next(context, token);
	}

	// If there are more than 1 tokens in the token stack, the statement must be an assignment.
	if (context->token_stack->top > 1) {
		int token_type = TK_INVALID;
		while ((token_type = pop_token(context->token_stack)) != TK_INVALID) {
			amd_assign(context, token_type, &instruction);
		}

		if (token->type != '=') {
			LOG_ERROR("line:%d Syntax Error: This is not an assignment statement.", context->linenumber);
			exit(0);
		}

		lexer_next(context, token);
		expr(context, token, &instruction);

		lexer_next(context, token);
		if (token->type == ';') {
			jump_expr(context, token, &instruction);
			lexer_next(context, token);
		}
	}
	else {
		int token_type = pop_token(context->token_stack);

		if (token->type == ';') {
			switch (token_type) {
			case 'A': {
				CI_SET_A_BIT(instruction, 0);
				CI_SET_COMP_BITS(instruction, 1, 1, 0, 0, 0, 0);
			} break;
			case 'D': {
				CI_SET_A_BIT(instruction, 0);
				CI_SET_COMP_BITS(instruction, 0, 0, 1, 1, 0, 0);
			} break;
			case 'M': {
				CI_SET_A_BIT(instruction, 1);
				CI_SET_COMP_BITS(instruction, 1, 1, 0, 0, 0, 0);
			} break;
			default: {
				LOG_ERROR("line:%d Syntax Error: Unknow jump condition.", context->linenumber);
				exit(0);
			} break;
			}

			jump_expr(context, token, &instruction);
			lexer_next(context, token);
		}
		else if (token->type == '='){
			amd_assign(context, token_type, &instruction);

			lexer_next(context, token);
			expr(context, token, &instruction);

			lexer_next(context, token);
			if (token->type == ';') {
				jump_expr(context, token, &instruction);
				lexer_next(context, token);
			}
		}
		else if (token->type == '+' || token->type == '-' || token->type == '|' || token->type == '&') {
			binary_expr(context, token_type, token, &instruction);
			lexer_next(context, token);

			jump_expr(context, token, &instruction);
			lexer_next(context, token);
		}
		else {
			LOG_ERROR("line:%d Syntax Error: Unknow condition.", context->linenumber);
			exit(0);
		}
	}

	append_instruction(context, instruction);
}

void unary_statement(struct Context* context, struct Token* token) {
	Instruction instruction = 0;
	CI_SET_COMMON(instruction);

	unary_expr(context, token, &instruction);
	lexer_next(context, token);

	jump_expr(context, token, &instruction);
	lexer_next(context, token);

	append_instruction(context, instruction);
}

void const_statement(struct Context* context, struct Token* token) {
	Instruction instruction = 0;
	CI_SET_COMMON(instruction);
	CI_SET_A_BIT(instruction, 0);

	if (token->type == TK_NUMBER) {
		if (token->number == 0) {
			CI_SET_COMP_BITS(instruction, 1, 0, 1, 0, 1, 0);
		}
		else if (token->number == 1) {
			CI_SET_COMP_BITS(instruction, 1, 1, 1, 1, 1, 1);
		}
		else if (token->number == -1) {
			CI_SET_COMP_BITS(instruction, 1, 1, 1, 0, 1, 0);
		}
		else {
			LOG_ERROR("line:%d Syntax Error: Unsupport condition jump.", context->linenumber);
			exit(0);
		}

		lexer_next(context, token);
		if (token->type == ';') {
			jump_expr(context, token, &instruction);
			lexer_next(context, token);
		}
	}
	else {
		LOG_ERROR("line:%d Syntax Error: Unsupport condition jump.", context->linenumber);
		exit(0);
	}

	append_instruction(context, instruction);
}

void label_statement(struct Context* context, struct Token* token) {
	insert_label(context->label_ht, token->buf, context->address);
	lexer_next(context, token);
}

void goto_statement(struct Context* context, struct Token* token) {
	lexer_next(context, token);

	if (token->type != TK_VAR) {
		LOG_ERROR("line %d The GOTO command must be followed by variable.", context->linenumber);
		exit(0);
	}

	struct Label* label = find_label(context->label_ht, token->buf);
	if (label) {
		append_instruction(context, label->address & 0x7fff);
	}
	else {
		unsigned short address = append_instruction(context, 0);
		append_undefine_jump_instruction(context, token->buf, address, context->linenumber);
	}

	Instruction jump;
	CI_SET_COMMON(jump);
	CI_SET_A_BIT(jump, 0);
	CI_SET_COMP_BITS(jump, 1, 0, 1, 0, 1, 0);
	CI_SET_D_BITS(jump, 0, 0, 0);
	CI_SET_J_BITS(jump, 1, 1, 1);

	append_instruction(context, jump);

	lexer_next(context, token);
}

static void load_statement(struct Context* context, struct Token* token) {
	Instruction instruction = 0;
	CI_SET_COMMON(instruction);
	CI_SET_A_BIT(instruction, 0);
	CI_SET_COMP_BITS(instruction, 1, 0, 1, 0, 1, 0);
	CI_SET_D_BITS(instruction, 0, 0, 0);
	CI_SET_J_BITS(instruction, 0, 0, 0);

	append_instruction(context, instruction);

	lexer_next(context, token);
}

void statements_list(struct Context* context) {
	struct Token token;
	struct Token* token_ptr = &token;

	label_hashtable_init(context);
	undefine_label_hashtable_init(context);
	token_stack_init(context);

	lexer_next(context, token_ptr);

	for (;;) {
		switch (token_ptr->type) {
			case '@': {
				address_statement(context, token_ptr);
			} break;
			case 'A': case 'M': case 'D': {
				amd_statement(context, token_ptr);
			} break;
			case TK_NUMBER: {
				const_statement(context, token_ptr);
			} break;
			case '-': case '!': {
				unary_statement(context, token_ptr);
			} break;
			case TK_LABEL: {
				label_statement(context, token_ptr);
			} break;
			case TK_GOTO: {
				goto_statement(context, token_ptr);
			} break;
			case TK_NOP: {
				load_statement(context, token_ptr);
			} break;
			case EOF: {
				goto END;
			}
			default: {
				LOG_ERROR("line:%d Syntax Error:Unsupport statement.", context->linenumber);
				exit(0);
			} break;
		}
	}
	
END:
	adjust_undefine_labels(context);
	check_undefine_labels(context);

	dump_instructions(context);

	token_stack_uninit(context);
	undefine_label_hashtable_uninit(context);
	label_hashtable_uninit(context);

	LOG_ERROR("Finish.");
}
