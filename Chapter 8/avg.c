/* avg -- Takes the average of numbers entered
*/

#include <stdio.h>
#include <string.h>

char line[100]; /* Line for input data */
int numbers[100]; /* List of number to average */

int main(int argc, char const *argv[])
{
    int i = 0; /* Counter */
	/* Get user input and assign it to variable */
	while (1) {
		printf("Enter integer, or press enter to finish: ");
		fgets(line, sizeof(line), stdin);
		// testing to see if the two are equivalent
		if (strcmp(line, "\n") == 0)
			break;
		sscanf(line, "%d", &numbers[i]);
		++i;
	}

	float average;

	for (int j = 0; j < i; ++j) {
		average += numbers[j];
	}
	average /= i;

	printf("Average is: %f\n", average);
    return 0;
}

