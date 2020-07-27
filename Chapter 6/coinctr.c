/* coinctr -- counts the number of coins needed
 * 	to make up the amount give that is under
 * 	one dollar
 */

#include <stdio.h>

char line[100]; /* Line for input data */
unsigned long int cents; /* Number of cents given */
unsigned long int pennies, nickles, dimes, quarters; /* Number of respective coins */

int main(int argc, char const *argv[])
{
	// Get user input and assign to variable
	printf("Enter the number of cents: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%lu", &cents);
	//Evaluate to see if more of coin can be made from total
	while ((cents / 25) >= 1) {
		++quarters; // Add to coin if more coins can be made
		cents -= 25; // Sub from total the coins that were made
	}
	while ((cents / 10) >= 1) {
		++dimes;
		cents -= 10;
	}
	while ((cents / 5) >= 1) {
		++nickles;
		cents -= 5;
	}
	while (cents >= 1) {
		++pennies;
		--cents;
	}

	printf("Quaters: %lu, Dimes: %lu, Nickles: %lu, Pennies: %lu\n", quarters, dimes, nickles, pennies);

	return 0;
}