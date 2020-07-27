/*
	Name: rectangle.c

	Purpose: This program prints out the area and the 
	perimeter of a hard coded rectangle by using the height and width as inputs

	Usage: running the program displays the values

*/



#include <stdio.h>

int main(int argc, char const *argv[])
{
	// Defining the height and width
	float height, width;
	height = 2.3;
	width = 6.8;
	// Computing and displaying area and perimeter
	float area = height * width;
	float perimeter = height * 2.0 + width * 2.0;

	printf("Area: %f Perimeter: %f\n", area, perimeter);
	
	return 0;
}

