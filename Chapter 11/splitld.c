/* splitlongint.c -- splits a long integer into eight 4 bit values
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char line[100]; // Line of input data
	long int integer; // Integer to be split

	// Get user in put and format it
	printf("Enter integer to split bits: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &integer);

	for (int i = 0; i < 32; ++i) {
		// Check every bit if it is set
		if (integer == (integer | (0x80000000 >> i)))
			fputc('1', stdout);
		else
			fputc('0', stdout);
		if (((i+1) % 4) == 0)
			fputc(' ', stdout);
	}

	return 0;
}

