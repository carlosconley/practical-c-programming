/* fcopy -- copies a file, expanding all tabs to multiple spaces
*/

#include <stdio.h>
#include <stdlib.h>

#define INPUT "input.txt"
#define OUTPUT "output.txt"

int main(int argc, char const *argv[])
{
	FILE * in_file = fopen(INPUT, "r");
	FILE * out_file = fopen(OUTPUT, "w");

	char ch;
	while ((ch = fgetc(in_file)) != EOF) {
		if (ch == '\t')
			fputs("    ", out_file);
		else
			fputc(ch, out_file);
	}

	fclose(in_file);
	fclose(out_file);

	return 0;
}
