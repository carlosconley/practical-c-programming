/* fline -- reads a file and then counts the number of lines in it
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	// Open the file for reading
	FILE * in_file = fopen("input.txt", "r");
	if (in_file == NULL) {
		fprintf(stderr, "Cannot open input file\n");
		exit(8);
	}

	// Line count will always be one, a new line indicates an additional line on top of the additional line
	char line[1024];
	int line_count = 0;
	while (fgets(line, sizeof(line), in_file)) {
		++line_count;
	}

	printf("Lines in file: %d", line_count);

	fclose(in_file);
	return 0;
}
