/* gradeplus -- turn grade into letter grade with + or - */

#include <stdio.h>

char line[100]; /* Line for input data */
int grade; /* Grade number to be evaluated */

int main(int argc, char const *argv[])
{
	// Get input from user and assign to variable
	printf("Enter grade from 100 to 0: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &grade);

	/* Logic to display letter grade
	 * 100-91 = A, 90 - 81 = B, ... 
	 * 1-3 = -, 4-7 = <blank>, 8-0 = +
	 */

	if (grade <= 100 && grade > 90) { //Evaluating for first condition
		printf("A");
		if (grade - 90 <= 10 && grade - 90 > 7) /* 
												 * Evaluates for modifier 
												 * Applies Modifier 
												 */
			printf("+\n");
		else if (grade - 90 <= 7 && grade - 90 > 3)
			printf("\n");
		else
			printf("-\n");
	} else if (grade <= 90 && grade > 80) {
		printf("B");
		if (grade - 80 <= 10 && grade - 80 > 7)
			printf("+\n");
		else if (grade - 80 <= 7 && grade - 80 > 3)
			printf("\n");
		else
			printf("-\n");
	} else if (grade <= 80 && grade > 70) {
		printf("C");
		if (grade - 70 <= 10 && grade - 70 > 7)
			printf("+\n");
		else if (grade - 70 <= 7 && grade - 70 > 3)
			printf("\n");
		else
			printf("-\n");
	} else if (grade <= 70 && grade > 60) {
		printf("D");
		if (grade - 60 <= 10 && grade - 60 > 7)
			printf("+\n");
		else if (grade - 60 <= 7 && grade - 60 > 3)
			printf("\n");
		else
			printf("-\n");
	} else {
		printf("F\n");
	}

	return 0;
}