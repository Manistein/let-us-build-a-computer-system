#include "lexer.h"
#include "codeloader.h"
#include <ctype.h>
#include <stdio.h>

// The order of the following keywords must be the same as the TokenType defined in lexer.h
static const char* s_keywords[] = {
	"JGT", "JEQ", "JGE", "JLT", "JNE", "JLE", "JMP", "GOTO"
};

int str_hash(const char* str) {
	int hash = 0;

	int sz = strlen(str);
	for (int i = 0; i < sz; i++) {
		hash += str[i];
	}

	return hash;
}

struct KeywordHashNode {
	char* v;
	struct KeywordHashNode* next;
	int type;
};

struct KeywordHashNode** s_keyword_hashtable = NULL;

static BOOL init_keyword_hashtable() {
	int keywords_num = sizeof(s_keywords) / sizeof(char*);
	s_keyword_hashtable = (struct KeywordHashNode**)malloc((size_t)keywords_num * sizeof(struct KeywordHashNode*));
	if (!s_keyword_hashtable) {
		LOG_ERROR("Fail to malloc memory for s_keyword_hashtable.");
		return FALSE;
	}

	memset(s_keyword_hashtable, 0, (size_t)keywords_num * sizeof(struct KeywordHashNode*));

	for (int i = 0; i < keywords_num; i++) {
		const char* jmp_str = s_keywords[i];
		int hash = str_hash(jmp_str);

		int index = hash % keywords_num;
		struct KeywordHashNode* node = (struct KeywordHashNode*)malloc(sizeof(struct KeywordHashNode));
		if (!node) {
			LOG_ERROR("init_keyword_hashtable:not enough memory.");
			abort();
		}

		node->v = (char*)jmp_str;
		node->next = NULL;
		node->type = TOKEN_RESERVED + i;

		struct KeywordHashNode* old_node = s_keyword_hashtable[index];
		s_keyword_hashtable[index] = node;
		node->next = old_node;
	}

	return TRUE;
}

static void uninit_keyword_hashtable() {
	int keywords_num = sizeof(s_keywords) / sizeof(char*);
	for (int i = 0; i < keywords_num; i++) {
		struct KeywordHashNode* node = s_keyword_hashtable[i];
		while (node) {
			struct KeywordHashNode* next = node->next;
			free(node);
			node = next;
		}
	}
}

static struct KeywordHashNode* find_keyword(const char* str) {
	int keywords_num = sizeof(s_keywords) / sizeof(char*);
	int hash = str_hash(str);
	int index = hash % keywords_num;
	struct KeywordHashNode* node = s_keyword_hashtable[index];

	while (node) {
		if (strcmp(str, node->v) == 0) {
			return node;
		}
		else {
			node = node->next;
		}
	}

	return node;
}

BOOL lexer_init(struct Context* context) {
	if (!init_keyword_hashtable()) {
		LOG_ERROR("init_keyword_hashtable fail");
		return FALSE;
	}

	return TRUE;
}

BOOL lexer_uninit(struct Context* context) {
	uninit_keyword_hashtable();
	return TRUE;
}

static char try_get_string_token(struct Context* context, char first, struct Token* r) {
	char var_buf[MAX_TOKEN_SIZE + 1] = { 0 };
	var_buf[0] = first;

	int index = 1;
	char c = nextchar(context);
	while (isalpha(c) || isdigit(c) || c == '_') {
		if (index >= MAX_TOKEN_SIZE) {
			LOG_ERROR("line:%d The token exceeds the max token length.", context->linenumber);
			abort();
		}

		var_buf[index] = c;

		c = nextchar(context);
		index++;
	}

	struct KeywordHashNode* node = find_keyword(var_buf);
	if (node) {
		strcpy(r->buf, node->v);
		r->type = node->type;
	}
	else {
		strcpy(r->buf, var_buf);
		r->type = TK_VAR;
	}

	return c;
}

static char try_get_label_token(struct Context* context, struct Token* r) {
	char c = nextchar(context);
	if (!isalpha(c)) {
		LOG_ERROR("line:%d Label must start with a letter.", context->linenumber);
		abort();
	}

	char label_buf[MAX_LABEL_SIZE + 1] = { 0 };
	label_buf[0] = c;

	for (int i = 1; i < MAX_LABEL_SIZE; i++) {
		c = nextchar(context);
		if (c == ')') {
			break;
		}

		if (isalpha(c) || isdigit(c) || c == '_') {
			label_buf[i] = c;
		}
		else {
			LOG_ERROR("line %d The label must be an identifier which is constructed of alphabets.", context->linenumber);
			abort();
		}
	}

	if (c != ')') {
		LOG_ERROR("line:%d The label's length is larger than max limit (32 alphabets).", context->linenumber);
		abort();
	}

	nextchar(context);
	strcpy(r->buf, label_buf);
	r->type = TK_LABEL;

	return c;
}

static char try_get_number_token(struct Context* context, char first, struct Token* r) {
	char number_buf[MAX_DIGIT_NUM + 1] = { 0 };
	number_buf[0] = first;

	int index = 1;
	char c = nextchar(context);
	while (isdigit(c)) {
		if (index >= MAX_DIGIT_NUM) {
			break;
		}

		number_buf[index] = c;

		c = nextchar(context);
		index++;
	}

	if (c != ' ' && c != '\t' && c != '\v' && c != '\n' && c != '\r') {
		LOG_ERROR("line:%d A number format is incorrect.", context->linenumber);
		abort();
	}

	r->number = atoi(number_buf);
	r->type = TK_NUMBER;

	return c;
}

static char skipcomment(struct Context* context) {
	char c = nextchar(context);
	if (c != '/') {
		LOG_ERROR("line:%d The CPU don't support division operation.", context->linenumber);
		abort();
	}

	while (c != '\r' && c != '\n' && c != EOF) {
		c = nextchar(context);
	}

	return c;
}

void next(struct Context* context, struct Token* r) {
	char c = get_current_char(context);
	BOOL is_break_loop = FALSE;

	for (;;) {
		switch (c) {
		case '(': {
			try_get_label_token(context, r);
			is_break_loop = TRUE;
		} break;
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9': {
			try_get_number_token(context, c, r);

			is_break_loop = TRUE;
		} break;
		case '\r': case '\n': {
			context->linenumber++;
			c = nextchar(context);
		} break;
		case ' ': case '\t': case '\v': {
			c = nextchar(context);
		} break;
		case '/': {
			c = skipcomment(context);
		} break;
		case 'A': case 'M': case 'D': case '@': case ';':
		case '=': case '+': case '-': case '&': case '|':
		case '!': case EOF: {
			r->type = (unsigned short)c;
			is_break_loop = TRUE;
		} break;
		default: {
			try_get_string_token(context, c, r);
			is_break_loop = TRUE;
		} break;
		}

		if (is_break_loop) {
			break;
		}
	}
}