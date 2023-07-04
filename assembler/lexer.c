#include "lexer.h"
#include "codeloader.h"
#include <ctype.h>
#include <stdio.h>

int g_linenumbers = 1;

// The order of the following keywords must be the same as the TokenType defined in lexer.h
static const char* s_keywords[] = {
	"JGT", "JEQ", "JGE", "JLT", "JNE", "JLE", "JMP"
};

struct KeywordHashNode {
	char* v;
	struct HashNode* next;
	int type;
};

struct KeywordHashNode** s_keyword_hashtable = NULL;

static int str_hash(const char* str) {
	int hash = 0;

	int sz = strlen(str);
	for (int i = 0; i < sz; i++) {
		hash += str[i];
	}

	return hash;
}

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

		node->v = jmp_str;
		node->next = NULL;
		node->type = TOKEN_RESERVED + i;

		struct KeywordHashNode* old_node = s_keyword_hashtable[index];
		s_keyword_hashtable[index] = node;
		node->next = old_node;
	}
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

BOOL lexer_init(const char* file) {
	if (!codeloader_init(file)) {
		LOG_ERROR("init_codelader fail");
		return FALSE;
	}

	if (!init_keyword_hashtable()) {
		LOG_ERROR("init_keyword_hashtable fail");
		return FALSE;
	}

	return TRUE;
}

BOOL lexer_uninit() {
	uninit_keyword_hashtable();
	codeloader_uninit();
	return TRUE;
}

static char try_get_string_token(char first, struct Token* r) {
	char var_buf[MAX_TOKEN_SIZE] = { 0 };
	var_buf[0] = first;

	int index = 1;
	char c = nextchar();
	while (isalpha(c) || isdigit(c) || c == '_') {
		var_buf[index] = c;

		c = nextchar();
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

static char try_get_label_token(struct Token* r) {
	char c = nextchar();
	if (!isalpha(c)) {
		LOG_ERROR("line:%d Label must start with a letter.", g_linenumbers);
		abort();
	}

	char label_buf[MAX_LABEL_SIZE] = { 0 };
	label_buf[0] = c;

	for (int i = 1; i < MAX_LABEL_SIZE; i++) {
		c = nextchar();
		if (c == ')') {
			break;
		}

		if (isalpha(c) || isdigit(c) || c == '_') {
			label_buf[i] = c;
		}
		else {
			LOG_ERROR("line %d The label must be an identifier which is constructed of alphabets.", g_linenumbers);
			abort();
		}
	}

	if (c != ')') {
		LOG_ERROR("line:%d The label's length is larger than max limit (32 alphabets).", g_linenumbers);
		abort();
	}

	nextchar();
	strcpy(r->buf, label_buf);
	r->type = TK_LABEL;

	return c;
}

static char try_get_number_token(char first, struct Token* r) {
	char number_buf[MAX_DIGIT_NUM + 1] = { 0 };
	number_buf[0] = first;

	int index = 1;
	char c = nextchar();
	while (isdigit(c)) {
		if (index >= MAX_DIGIT_NUM - 1) {
			break;
		}

		number_buf[index] = c;

		c = nextchar();
		index++;
	}

	if (c != ' ' && c != '\t' && c != '\v' && c != '\n' && c != '\r') {
		LOG_ERROR("line:%d A number format is incorrect.", g_linenumbers);
		abort();
	}

	r->number = atoi(number_buf);
	r->type = TK_NUMBER;

	return c;
}

static char skipcomment() {
	char c = nextchar();
	if (c != '/') {
		LOG_ERROR("line:%d The CPU don't support division operation.");
		abort();
	}

	while (c != '\r' && c != '\n' && c != EOF) {
		c = nextchar();
	}

	return c;
}

BOOL next(struct Token* r) {
	char c = getchar();
	BOOL is_break_loop = FALSE;

	for (;;) {
		switch (c) {
		case '(': {
			try_get_label_token(r);
			is_break_loop = TRUE;
		} break;
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9': {
			try_get_number_token(c, r);

			is_break_loop = TRUE;
		} break;
		case '\r': case '\n': {
			g_linenumbers++;
			c = nextchar();
		} break;
		case ' ': case '\t': case '\v': {
			c = nextchar();
		} break;
		case '/': {
			c = skipcomment();
		} break;
		case 'A': case 'M': case 'D': case '@': case ';':
		case '=': case '+': case '-': case '&': case '|':
		case '!': {
			r->type = (unsigned short)c;
			is_break_loop = TRUE;
		} break;
		default: {
			try_get_string_token(c, r);

			is_break_loop = TRUE;
		} break;
		}

		if (is_break_loop) {
			break;
		}
	}

	return TRUE;
}