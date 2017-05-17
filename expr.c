#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Calc {
	char c;
	long int i;
};

typedef union Calc calc;

int
main(int argc, char **argv) {
	if (argc == 1)
		return 1;

	calc *stack = (calc *) calloc(argc - 1, sizeof(calc));
	free(stack);
	return 0;
}
