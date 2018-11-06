#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: Input single integer number\n");
		return 0;
	}

	int in = atol(argv[1]);

	int temp = in - 32;
	
	float out = temp / 1.8;

	printf("Output: %f\n", out);

	return 0;

}
