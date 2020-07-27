/* isprime -- Decides if a number is prime or not
*/

#include <stdio.h>

char line[100]; /* Line for input data */
unsigned long int number; /* Number to evaluate for prime or not */
int isprime = 1;

int main(int argc, char const *argv[])
{
	// Get user input and assign to variables
	printf("Enter number to see if it is prime: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%lu", &number);


	unsigned long int lowernum = 2;

	while (lowernum < number) {
		if (number == 2 || number == 1) {
			break;
		}
		if (number % lowernum == 0) {
			isprime = 0;
			break;
		}
		++lowernum;
	}

	if (isprime == 1)
		printf("%lu is a prime", number);
	else 
		printf("%lu is not a prime", number);

	return 0;
}