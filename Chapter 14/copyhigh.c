/* copyhigh -- copies a file and removes all characters with the high bit set
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE * in_file = fopen("input.txt", "r");
	FILE * out_file = fopen("output.txt", "w");

	char ch;
	while ((ch = fgetc(in_file)) != EOF) {
		if (((ch & 0x80) != 0))
			continue; // Do nothing
		fputc(ch, out_file);
	}

	fclose(in_file);
	fclose(out_file);

	return 0;
}