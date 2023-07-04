#ifndef _assembler_h_
#define _assembler_h_

struct Debug {
	int linenumber;
};

#define MAX_CODE_CACHE_SIZE 8
#define MAX_TOKEN_SIZE 64
#define CODELOADER_BUFFER_SIZE 512
#define MAX_LABEL_SIZE 32
#define MAX_DIGIT_NUM 5

#define BOOL int
#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include <stdlib.h>

#define LOG_ERROR printf

#endif