/* 
 *	perimcalc -- calculates the permimeter of calculator	
 *
 *	Usage
 *		Enter in the width and height and result will be printed to console
 *	
 *	Restrictions
 *		Height and width must be entered in format %f %f
 */

#include <stdio.h>

char line[100]; /* Line of input data */
float perimeter, height, width; /* Perimeter, height, and width of rectangle */

int main(int argc, char const *argv[])
{
	// Get user input and assign it to variables
	printf("Enter height and width of rectangle: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f %f", &height, &width);

	// Compute perimeter and print to console
	perimeter = 2.0 * (height + width);
	printf("%f\n", perimeter);

	return 0;
}