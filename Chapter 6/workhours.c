/* workhours -- calculate employee's pay using hours worked
 *	and hourly wage
 */	

#include <stdio.h>

char line[100]; /* Line for input data */
int hours, pay, overtime = 0; /* Hours worked, hourly rate, overtime hours */
float check; /* Employee's weekly paycheck */

int main(int argc, char const *argv[])
{
	// Get user input and assign to variable
	printf("Enter the number of hours worked by employee: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &hours);

	printf("Enter the employee's hourly wage: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &pay);

	//Calculate the employee's weekly paycheck

	while (hours > 40) {
		--hours;
		++overtime;
	}

	check = ((float) overtime * 1.5 + (float) hours) * (float) pay;

	printf("Your employee gets paid $%f this week\n", check);


	return 0;
}