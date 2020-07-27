/* mintotime.c -- converts minutes to hours and minutes
 *
 *	Usage
 *		Enter the number of minutes
 */

#include <stdio.h>

char line[100]; /* Line of input data */
int minin, hour, min; /* Input minutes, output hours and minutes */

int main(int argc, char const *argv[])
{
	// Get user input and assign it to variables
	printf("Enter the number of minutes: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &minin);

	// Calculate hours and minutes and print to console
	hour = minin / 60;
	min = minin % 60;
	printf("%d hours and %d minutes\n", hour, min);

	return 0;
}