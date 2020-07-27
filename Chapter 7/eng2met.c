/* 	eng2met -- converts english units to metric.

	Usage: the user types in number with the correct units (gallons, miles, inches)
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char line[100]; /* Line for input data */
float input; /* Number to be converted */
char choice[30]; /* Units to convert */

int main(int argc, char const *argv[])
{
	/* Get user input, assign to variable */
	printf("Enter the number and units you with to convert: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f %s", &input, choice);

	// Make sure that input is in lowercase
	for (int i = 0; choice[i]; ++i)
		choice[i] = tolower(choice[i]);

	// See if strings are the same, display proper conversion if so
	if (strcmp(choice, "gallons") == 0 || strcmp(choice, "gal") == 0)
		printf("%f liters\n", input * 3.785411784);
	else if (strcmp(choice, "miles") == 0|| strcmp(choice, "mi") == 0)
		printf("%f kilometers\n", input * 1.609344);
	else if (strcmp(choice, "inches") == 0|| strcmp(choice, "in") == 0)
		printf("%f centimeters\n", input * 2.54);
	else 
		printf("Improper units\n");
	return 0;
}

