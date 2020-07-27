/*
	Name: usrinfo.c

	Purpose: Display the user's social first name, social
	security number, and date of birth.

	Usage: Program runs, collects user data, and then
	displays the data on the screen
*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Define variables and get user input
	char	usr_name[30];
	int 	ss_num;
	int 	dob_m, dob_d, dob_y;

	printf("First Name: ");
	scanf("%s", usr_name);

	printf("Social Security Number: ");
	scanf("%d", &ss_num);

	printf("mm/dd/yyyy: ");
	scanf("%2d/%2d/%4d", &dob_m, &dob_d, &dob_y);

	//print the input into a formatted statement
	printf("Hello %s, just confirming that you were born on %2d/%2d/%4d, and your ss number is %d", usr_name, dob_m, dob_d, dob_y, ss_num);

	return 0;

}