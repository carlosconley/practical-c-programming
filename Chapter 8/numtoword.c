/* numtoword -- prints the number entered at a combination of words */

#include <stdio.h>

int line[100]; /* Line for input data */

int main(int argc, char const *argv[])
{

	int input;

	// Getting and formatting user input
	printf("Input a number to be written: ");
	while(1) {
		input = fgetc(stdin);
		if (input == '\n')
			break;
		switch (input) {
			case '1':
				printf("one ");
				break;
			case '2':
				printf("two ");
				break;
			case '3':
				printf("three ");
				break;
			case '4':
				printf("four ");
				break;
			case '5':
				printf("five ");
				break;
			case '6':
				printf("six ");
				break;
			case '7':
				printf("seven ");
				break;
			case '8':
				printf("eight ");
				break;
			case '9':
				printf("nine ");
				break;
			case '0':
				printf("zero ");
				break;
			default:
				printf("Input is not a number ");
				break;
			printf("\n");
		}
	}

	return 0;
}
