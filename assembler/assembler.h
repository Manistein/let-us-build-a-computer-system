#ifndef _assembler_h_
#define _assembler_h_

#define _CRT_SECURE_NO_WARNINGS

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
	Instruction* code;
	int size;
	int current_pos;
};

// -----------------------------------------------------------
// Label Hash Table
// -----------------------------------------------------------

#define COMMON_LABEL_HEADER char* name; int name_size; int hash

struct Label {
	COMMON_LABEL_HEADER;
	struct Label* next;

	unsigned short address;
};

struct LabelHashTable {
	struct Label** hash_table;
	int table_size;
	int elements;
};

struct JumpInstruction {
	int instruction_index; // The index of code cache instruction vector;
	int linenumber;		   // code linenumber;
	struct JumpInstruction* next;
};

struct UndefineLabel {
	COMMON_LABEL_HEADER;
	struct UndefineLabel* next;

	struct JumpInstruction* head;
	BOOL has_adjust;
};

struct UndefineLabelHashTable {
	struct UndefineLabel** hash_table;
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
	TK_NOP,
	TK_NUMBER,
	TK_LABEL,
	TK_VAR,

	TK_INVALID
};

struct Token {
	short type;
	union u {
		char buf[MAX_TOKEN_SIZE + 1];
		short number;		// only support integer value now.
	};
};

struct Context {
	int linenumber;
	struct CodeLoader loader;
	struct CodeCache cache;
	FILE* executable_file;
	unsigned short address;
	struct LabelHashTable* label_ht;
	struct UndefineLabelHashTable* undefine_label_ht;
	struct TokenStack* token_stack;
	struct Token look_ahead;
};

int str_hash(const char* str);

#endif