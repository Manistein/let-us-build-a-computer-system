#ifndef _codeloader_h_
#define _codeloader_h_

#include "assembler.h"

BOOL codeloader_init(struct Context* context, const char* file_name);
BOOL codeloader_uninit(struct Context* context);

char getchar(struct Context* context);
char nextchar(struct Context* context);

#endif