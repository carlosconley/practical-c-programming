/* timetomin.c -- converts hours and minutes to minutes
 *
 *	Usage
 *		Enter the hours and then the minutes
 *
 */

#include <stdio.h>

char line[100]; /* Line of input data */
int min, hour, minout; /* Time in minutes and hours, total time in minutes */

int main(int argc, char const *argv[])
{
	// Get user input and assign to varibales
	printf("Enter time in hours and minutes: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &hour, &min);

	// Convert Hours and minutes to minutes and print to console
	minout = hour*60 + min;
	printf("%d minutes\n", minout);

	return 0;
}