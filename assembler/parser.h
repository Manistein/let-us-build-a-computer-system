#ifndef _parser_h_
#define _parser_h_

#include "lexer.h"

BOOL parser_init(const char* file, const char* save_path);
void parse();
void parser_uninit();

#endif