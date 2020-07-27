/* ares -- structure that contains airline reservation data

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct reservation_data {
	int flight;
	char origin[4];
	char destin[4];
	int depart_min: 6;
	int depart_hour: 4;
	int arrival_min: 6;
	int arrival_hour: 4;
};



int main(int argc, char const *argv[])
{
	char airport1[100];
	char airport2[100];


	struct reservation_data airline_data[20] = {
		{ 3269, "CLE", "BOS", "20110120090436", "20110120090436" },
		{ 4189, "BOS", "CLE", "20110120090436", "20110120090436" },
		{ 603,  "JFK", "ORD", "20110120090436", "20110120090436" },
		{ 900,  "CLE", "MDW", "20110120090436", "20110120090436" },
		{ 1337, "BOS", "ORD", "20110120090436", "20110120090436" },
		{ 9027, "CLE", "MSP", "20110120090436", "20110120090436" },
		{ 6167, "CLE", "SJC", "20110120090436", "20110120090436" },
		{ 8887, "CLE", "SEA", "20110120090436", "20110120090436" },
		{ 1230, "CLE", "NUQ", "20110120090436", "20110120090436" },
		{ 9723, "BOS", "ANK", "20110120090436", "20110120090436" },
		{ 723, "MSP", "JUN", "20110120090436", "20110120090436" }
	};

	// Get user data
	printf("Enter in the first airport: ");
	fgets(airport1, sizeof(airport1), stdin);
	airport1[strlen(airport1) - 1] = '\0'; // Trim the newline

	printf("Enter in the second airport: ");
	fgets(airport2, sizeof(airport2), stdin);
	airport2[strlen(airport2) - 1] = '\0'; // Trim the newline

	for (int i = 0; i < sizeof(airline_data); ++i) {
		// Comparing to see if the two string are the same
		if (strcmp(airline_data[i].origin, airport1) == 0 || strcmp(airline_data[i].origin, airport2) == 0) {
			printf("Flight %d: %s -> %s", airline_data[i].flight, airline_data[i].origin, airline_data[i].destin);
		}
	}

	return 0;
}