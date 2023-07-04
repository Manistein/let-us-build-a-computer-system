#ifndef _codeloader_h_
#define _codeloader_h_

#include "assembler.h"

BOOL codeloader_init(const char* file_name);
BOOL codeloader_uninit();

char getchar();
char nextchar();

#endif