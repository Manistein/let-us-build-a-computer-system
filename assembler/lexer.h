#ifndef _lexer_h_
#define _lexer_h_

#include "assembler.h"

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
	TK_GOTO,
	TK_NUMBER,
	TK_LABEL,
	TK_VAR,

	TK_INVALID
};

struct Token {
	unsigned short type;
	union u {
		char buf[MAX_TOKEN_SIZE + 1];
		short number;		// only support integer value now.
	};
};

BOOL lexer_init(struct Context* context);
BOOL lexer_uninit(struct Context* context);

void next(struct Context* context, struct Token* r);

#endif