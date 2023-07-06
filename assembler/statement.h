#ifndef _statement_h_
#define _statement_h_

#include "assembler.h"
#include "lexer.h"

void address_statement(struct Context* context, struct Token* token);
void amd_statement(struct Context* context, struct Token* token);
void unary_statement(struct Context* context, struct Token* token);
void const_jump_statement(struct Context* context, struct Token* token);
void label_statement(struct Context* context, struct Token* token);
void goto_statement(struct Context* context, struct Token* token);

void statement_list(struct Context* context);

#endif