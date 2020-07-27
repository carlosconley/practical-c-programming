/* atob -- takes an ascii input file with numbers and copies it to a binary file
*/

#include <stdio.h>
#include <stdlib.h>

int buffer[100];

int main(int argc, char const *argv[])
{
	FILE * a_file = fopen("ascii.txt", "r");
	FILE * b_file = fopen("binary.bin", "wb");

	//loop through every number and add it to buffer
	int i = 0;
	while(fscanf(a_file, "%d", &buffer[i]) != -1) {
		++i;
	}

	// write the buffer to the file
	fwrite(buffer, sizeof(buffer[0]), 100, b_file);

	fclose(a_file);
	fclose(b_file);


	return 0;
}
