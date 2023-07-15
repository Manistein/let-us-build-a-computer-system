#include "parser.h"
#include "statement.h"
#include "codeloader.h"

static void codecache_init(struct Context* context) {
	context->cache.current_pos = 0;
	context->cache.size = 0;
	context->cache.code = NULL;
}

static void codecache_uninit(struct Context* context) {
	if (context->cache.code) {
		free(context->cache.code);
		context->cache.code = NULL;
		context->cache.size = 0;
		context->cache.current_pos = 0;
	}
}

BOOL context_init(struct Context* context, const char* asm_file, const char* executable_file) {
	context->linenumber = 1;
	context->executable_file = NULL;

	if (!codeloader_init(context, asm_file)) {
		LOG_ERROR("init_codelader fail");
		return FALSE;
	}

	codecache_init(context);

	// clear content
	FILE* f = fopen(executable_file, "w");
	if (f) {
		fclose(f);
	}

	f = fopen(executable_file, "a+");
	if (!f)
		return FALSE;

	context->executable_file = f;
	context->address = 0;
	context->look_ahead.type = TK_INVALID;
	memset(context->look_ahead.buf, 0, MAX_TOKEN_SIZE + 1);

	return TRUE;
}

void context_uninit(struct Context* context) {
	if (!context) 
		return;

	if (context->executable_file)
		fclose(context->executable_file);

	codecache_uninit(context);
	codeloader_uninit(context);
}

BOOL parser_init(struct Context* context) {
	if (!lexer_init(context)) {
		return FALSE;
	}

	return TRUE;
}

void parse(struct Context* context) {
	statements_list(context);
}

void parser_uninit(struct Context* context) {
	lexer_uninit(context);
}