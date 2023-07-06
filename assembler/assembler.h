#ifndef _assembler_h_
#define _assembler_h_

#define MAX_CODE_CACHE_SIZE 8
#define MAX_TOKEN_SIZE 63
#define CODELOADER_BUFFER_SIZE 512
#define MAX_LABEL_SIZE 32
#define MAX_DIGIT_NUM 5

#define BOOL int
#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LOG_ERROR printf

typedef unsigned short Instruction;

struct CodeLoader {
	char buffer[CODELOADER_BUFFER_SIZE];
	unsigned int read_num;
	char* current;
	FILE* file;
};

struct CodeCache {
	Instruction code[MAX_CODE_CACHE_SIZE];
	int current_pos;
};

// -----------------------------------------------------------
// Label Hash Table
// -----------------------------------------------------------
struct Label {
	int hash;
	char* name;
	int name_size;
	int address;

	struct Label* next;
};

struct LabelHashTable {
	struct Label** hash_table;
	int table_size;
	int elements;
};

// -----------------------------------------------------------
// The token stack used to construct C-Instructions
// -----------------------------------------------------------
struct TokenStack {
	int* stack;
	int stack_size;
	int top;
};

struct Context {
	int linenumber;
	struct CodeLoader loader;
	struct CodeCache cache;
	FILE* executable_file;
	short address;
	struct LabelHashTable* label_ht;
	struct TokenStack* token_stack;
};

int str_hash(const char* str) {
	int hash = 0;

	int sz = strlen(str);
	for (int i = 0; i < sz; i++) {
		hash += str[i];
	}

	return hash;
}

#endif