#include "parser.h"
#include "statement.h"

static void codecache_init(struct Context* context) {
	context->cache.current_pos = 0;
}

BOOL context_init(struct Context* context, const char* asm_file, const char* executable_file) {
	context->linenumber = 1;
	context->cache.current_pos = 0;

	context->executable_file = NULL;

	if (!codeloader_init(context, asm_file)) {
		LOG_ERROR("init_codelader fail");
		return FALSE;
	}

	codecache_init(context);

	FILE* f = fopen(executable_file, "a+");
	if (!f)
		return FALSE;

	context->executable_file = f;
	context->address = 0;

	return TRUE;
}

void context_uninit(struct Context* context) {
	if (!context) 
		return;

	if (context->executable_file)
		fclose(context->executable_file);

	codeloader_uninit(context);
}

BOOL parser_init(struct Context* context) {
	if (!lexer_init(context)) {
		return FALSE;
	}

	return TRUE;
}

void parse(struct Context* context) {
	statement_list(context);
}

void parser_uninit(struct Context* context) {
	lexer_uninit(context);
}