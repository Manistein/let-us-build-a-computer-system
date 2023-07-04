#ifndef _lexer_h_
#define _lexer_h_

#include "assembler.h"

extern int g_linenumbers;

// Numbers under 256 are reserved for ASCII code.
#define TOKEN_RESERVED 256
enum TokenType {
	TK_JGT = TOKEN_RESERVED,
	TK_JEQ,
	TK_JGE,
	TK_JLT,
	TK_JNE,
	TK_JLE,
	TK_JMP,
	TK_NUMBER,
	TK_LABEL,
	TK_VAR,

	TK_TOTAL
};

struct Token {
	unsigned short type;
	union u {
		char buf[MAX_TOKEN_SIZE];
		int number;		// only support integer value now.
	};
};

BOOL lexer_init(const char* file);
BOOL lexer_uninit();

BOOL next(struct Token* r);

#endif