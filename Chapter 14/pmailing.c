/* pmailing -- reads a .mail file and produces a set of mailing labels
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE * m_file = fopen("input.mail", "r");
	// What line position we are on in the info
	int position = 0;
	char line[100]; // Line for input data
	while (fgets(line, sizeof(line), m_file) != NULL) {
		if (line[0] == '\n') {
			position = 0;
			fputc('\n', stdout);
			continue; // Start back at the top
		}
		for (int i = 0; i < sizeof(line); ++i) {
			if (line[i] == '\n')
				line[i] = '\0';
		}

		switch (position) {
			case 0: // First Name
				printf("%s ", line);
				break;
			case 1: // Last Name
				printf("%s\n", line);
				break;
			case 2: // Address
				printf("%s\n", line);
				break;
			case 3: // City
				printf("%s, ", line);
				break;
			case 4: // State
				printf("%2s ", line);
				break;
			case 5:
				printf("%s\n", line);
				break;
			default:
				printf("Could not read line\n");
				break;
		}
		++position;
	}

	fclose(m_file);

	return 0;
}
