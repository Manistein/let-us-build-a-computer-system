#include "parser.h"

typedef int Instruction;

struct CodeCache {
	Instruction code[MAX_CODE_CACHE_SIZE];
	int current_pos;
};

static struct CodeCache s_codecache;
static char* s_save_path = NULL;

static void codecache_init() {
	s_codecache.current_pos = 0;
}

BOOL parser_init(const char* file, const char* save_path) {
	if (!lexer_init(file)) {
		return FALSE;
	}

	codecache_init();

	s_save_path = save_path;
	return TRUE;
}

void parse() {
	struct Token t;

	for (;;) {
		next(&t);

		
	}
}

void parser_uninit() {
	codeloader_uninit();
	lexer_uninit();
}