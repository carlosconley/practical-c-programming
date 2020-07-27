/* dist -- find the distance between two points */

#include <stdio.h>
#include <math.h>

char line[100]; /* Line for input data */
float x1coord, x2coord, y1coord, y2coord; /* x and y coordinates for the two points */
float distance; /* distance between the two points */

int main(int argc, char const *argv[])
{
	// Get user input and assign to variables
	printf("X an Y coordinates for first point: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f %f", &x1coord, &y1coord);

	printf("X an Y coordinates for second point: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f %f", &x2coord, &y2coord);

	// Compute distance between two points and print to console
	distance = sqrt((x1coord - x2coord)*(x1coord - x2coord) + 
		(y1coord - y2coord) * (y1coord - y2coord));
	printf("%f\n", distance);
	
	return 0;
}