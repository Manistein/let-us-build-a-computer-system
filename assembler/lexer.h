#ifndef _lexer_h_
#define _lexer_h_

#include "assembler.h"

BOOL lexer_init(struct Context* context);
BOOL lexer_uninit(struct Context* context);

void lexer_next(struct Context* context, struct Token* r);
void lexer_lookahead(struct Context* context);

#endif