/*	presistor -- calculate the total resistance of a 
	parallel resistor network
*/

#include <stdio.h>
#include <string.h>

char line[100]; /* Line for input data */
int resistors[100]; /* Array for resistance values */
float resistance; /* Total resistance of circut */

int main(int argc, char const *argv[])
{
	int i = 0; /* Counter */
	/* Get user input and assign it to variable */
	while (1) {
		printf("Enter resistence of single resistor, or press enter to finish: ");
		fgets(line, sizeof(line), stdin);
		// testing to see if the two are equivalent
		if (strcmp(line, "\n") == 0)
			break;
		sscanf(line, "%d", &resistors[i]);
		++i;
	}
	for (int j = 0; j < i; ++j) {
		resistance += (1/(float) resistors[j]);
	}

	resistance = 1/resistance;

	printf("The total resistance is: %f", resistance);


	return 0;
}