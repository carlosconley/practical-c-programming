/* countbit -- counts the number of bits set in an integer
*/

#include <stdio.h>

char line[100]; // Line for input data
short int integer; // Integer to test

int main(int argc, char const *argv[])
{
	// Get user in put and format it
	printf("Enter integer to count number of set bits: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &integer);

	int counter = 0; // Counter of set bits
	int i;
	// Test each bit
	for (i = 0; i < 16; ++i) {
		if (integer == (integer | (0x8000 >> i)))
			++counter;
		else
			continue;
	}

	// Shift the bits to the right to leave 0
	short int newint = 0xFFFFFFFF << 16 - counter;
	printf("%d is the shifted number", newint);


	return 0;
}
