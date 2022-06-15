#include <stdio.h>
#include "hello.h" // comment
#include <time.h>

int main(int argc, char *argv[]) {
	printf("#args = %d\n", argc - 1);

	for (int i = 1; i < argc; i++) {
		printf("arg[%d] = \"%s\"\n", i, argv[i]);
	}

	return 0;
}