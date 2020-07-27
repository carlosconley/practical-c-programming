/* 	sttime -- calculate the amount of time it would take to transmit
	a file over a serial transmission line (960 bytes/sec)

	Usage
		Write the number followed by a space and then then units,
		written with (modifier)b
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char line[100]; // Line for input data
unsigned long int filesize, total; //Filesize in (modifier)b, total in seconds
char units[32]; // Units ((modifier)b)
unsigned int minutes, hours, days; // Different times to display

int main(int argc, char const *argv[])
{
	// Get user input, assign to variable
	printf("Enter the number and units you with to convert: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%lu %s", &filesize, units);

	// Make sure that input is in lowercase
	for (int i = 0; units[i]; ++i)
		units[i] = tolower(units[i]);
	// check to see which units match, they are the same if they == 0
	if (strcmp(units, "b") == 0)
		;
	else if (strcmp(units, "kb") == 0)
		filesize *= 1024;
	else if (strcmp(units, "mb") == 0)
		filesize *= (1024*1024);
	else if (strcmp(units, "gb") == 0)
		filesize *= (1024*1024*1024);
	else
		printf("Incorrect units, answer is incorrect");
	// Convert filesize to time in seconds
	total = filesize / 960;
	// See if more days can be out of seconds left
	while (total / 86400 >= 1) {
		++days; // convert time to day
		total -= 86400; // get rid of day
	}
	while (total / 3600 >= 1) {
		++hours;
		total -= 3600;
	}
	while (total / 60 >= 1) {
		++minutes;
		total -= 60;
	}
	// All we are left with in total are the seconds

	printf("Days: %u, Hours: %u, Minutes: %u, Seconds: %lu", days, hours, minutes, total);


	return 0;
}