#ifndef _parser_h_
#define _parser_h_

#include "lexer.h"

BOOL context_init(struct Context* context, const char* asm_file, const char* executable_file);
void context_uninit(struct Context* context);

BOOL parser_init(struct Context* context);
void parse(struct Context* context);
void parser_uninit(struct Context* context);

#endif