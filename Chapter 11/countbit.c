/* countbit -- counts the number of bits set in an integer
*/

#include <stdio.h>

char line[100]; // Line for input data
int integer; // Integer to test

int main(int argc, char const *argv[])
{
	// Get user in put and format it
	printf("Enter integer to count number of set bits: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &integer);

	int counter = 0; // Counter of set bits

	// Test each bit
	for (int i = 0; i < 16; ++i) {
		if (integer == (integer | (0x8000 >> i)))
			++counter;
		else
			continue;
	}

	printf("The number of set bits is: %d\n", counter);


	return 0;
}
