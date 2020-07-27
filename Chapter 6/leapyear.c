/* leapyear -- whether that year is a leap year */

#include <stdio.h>

char line[100]; /* Line for input data */
int year; /* Year to evaluate as leap or not */

int main(int argc, char const *argv[])
{
	// Get user input and assign to variable
	printf("Enter the year: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &year);

	// Leap year is divisible by 4, unless divisible by
	// 100, but not 400
	if (year % 4 == 0 && !((year % 100 == 0) && (year % 400 != 0)))
		printf("%d is a leap year! \n", year);
	else
		printf("%d is not a leap year :(\n", year);

	return 0;
}