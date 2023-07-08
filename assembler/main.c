/* Copyright (c) 2023 Manistein,https://manistein.github.io/blog/

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.*/

#include "assembler.h"
#include "parser.h"

int main(int argc, char** argv) {
	if (argc < 3) {
		printf("The input arguments must at least contain a save path and an assembler file path.\n");
		printf("For example, a command can be as the following.\n");
		printf("./assembler ./asm_file_path ./save_path .\n");
		return 0;
	}

	char* asm_file = argv[1];
	char* save_file = argv[2];

	struct Context context;
	context_init(&context, asm_file, save_file);

	parser_init(&context);
	parse(&context);
	parser_uninit(&context);

	context_uninit(&context);

	getchar();

	return 1;
}