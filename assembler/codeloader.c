#include "codeloader.h"

BOOL codeloader_init(struct Context* context, const char* file_name) {
	memset(context->loader.buffer, 0, CODELOADER_BUFFER_SIZE);
	context->loader.read_num = 0;
	context->loader.current = context->loader.buffer;

	context->loader.file = fopen(file_name, "r");
	
	if (context->loader.file == NULL) {
		LOG_ERROR("can't open assembler file:");
		LOG_ERROR(file_name);

		return FALSE;
	}

	return TRUE;
}

BOOL codeloader_uninit(struct Context* context) {
	if (fclose(context->loader.file)) {
		LOG_ERROR("file close error");

		return FALSE;
	}

	return TRUE;
}

char get_current_char(struct Context* context) {
	if (context->loader.current >= context->loader.buffer + context->loader.read_num) {
		context->loader.read_num = (int)fread(context->loader.buffer, sizeof(char), CODELOADER_BUFFER_SIZE, context->loader.file);

		if (context->loader.read_num <= 0) {
			LOG_ERROR("nothing to read.");
			abort();
		}

		context->loader.current = context->loader.buffer;
	}

	char ret = *context->loader.current;
	return ret;
}

char nextchar(struct Context* context) {
	context->loader.current++;

	return get_current_char(context);
}
