#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float
ftoc(float inf) {
	float temp = inf - 32;
	float out = temp / 1.8;    
	return out;
}

float
ctof(float inc) {
	float temp = inc * 1.8;
	float out = temp + 32;
	return out;
}

int
main(int argc, char* argv[]) {
	
	float out;

	if (argc != 3) {	
		printf("Usage: tempconv given_temp_unit given_temp_value\n");
		return 0;
	}
    
	char unit = argv[1][0];
	float in = atof(argv[2]);

	if (unit == 'C' || unit == 'c') {
		out = ctof(in);
	}

	else if (unit == 'F' || unit == 'f') {
		out = ftoc(in);
	}

	else {
		printf("Usage: tempconv given_temp_unit given_temp_value\n");
		return 0;
	}

	printf("Output: %f\n", out);
	return 0;

}
