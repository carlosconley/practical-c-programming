/* btoa -- copys a binary file to an ascii file
*/

#include <stdio.h>
#include <stdlib.h>

int buffer[100];

int main(int argc, char const *argv[])
{
	FILE * b_file = fopen("binary.bin", "rb");
	FILE * a_file = fopen("ascii.txt", "w");

	// read in the data from the binary file, put it in the buffer
	int i = 0;
	while (fread(&buffer[i], sizeof(buffer[0]), 100, b_file))
		++i;

	// Print the data into ascii form
	for (i = 0; i < 100; ++i)
		fprintf(a_file, "%d\n", buffer[i]);

	fclose(b_file);
	fclose(a_file);

	return 0;
}
