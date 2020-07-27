/*
	Name: ctof.c

	Purpose: Converts centigrade to fahrenheit

	Usage: Type in centigrade temp and program will 
	display results
*/

#include <stdio.h>
char 	line[100]; /* line of input data */
float 	cent, fahr; /* temperature in centigrade and fahrenheit*/

int main(int argc, char const *argv[])
{
	//Getting user input and converting to float
	printf("Enter temperature in centigrade: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &cent);

	//Conversion to fahrenheit and displaying
	fahr = (9.0/5.0) * cent + 32.0;
	
	printf("%f\n", fahr);
	return 0;
}

