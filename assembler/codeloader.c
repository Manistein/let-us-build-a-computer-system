#include "codeloader.h"

struct CodeLoader {
	char buffer[CODELOADER_BUFFER_SIZE];
	unsigned int read_num;
	char* current;
	FILE* file;
};

static struct CodeLoader s_codeloader;

BOOL codeloader_init(const char* file_name) {
	memset(s_codeloader.buffer, 0, CODELOADER_BUFFER_SIZE);
	s_codeloader.read_num = 0;
	s_codeloader.current = s_codeloader.buffer;

	s_codeloader.file = fopen(file_name, "r");
	
	if (s_codeloader.file == NULL) {
		LOG_ERROR("can't open assembler file:");
		LOG_ERROR(file_name);

		return FALSE;
	}

	return TRUE;
}

BOOL codeloader_uninit() {
	if (fclose(s_codeloader.file)) {
		LOG_ERROR("file close error");

		return FALSE;
	}

	return TRUE;
}

char getchar() {
	if (s_codeloader.current >= s_codeloader.buffer + s_codeloader.read_num) {
		s_codeloader.read_num = (int)fread(s_codeloader.buffer, sizeof(char), CODELOADER_BUFFER_SIZE, s_codeloader.file);

		if (s_codeloader.read_num <= 0) {
			LOG_ERROR("nothing to read.");
			abort();
		}

		s_codeloader.current = s_codeloader.buffer;
	}

	char ret = *s_codeloader.current;
	return ret;
}

char nextchar() {
	s_codeloader.current++;

	return getchar();
}
