// begins -- makes use of the begins function, which tests to see if string1 begins string2

#include <stdio.h>

int begins (char string1[], char string2[])
{
	// Isbegin is defaulted to true
	int i, isbegin = 1;
	for (i = 0; string1[i] != '\0'; ++i) { // For all of the characters in string1
		if (string1[i] != string2[i]) {
			isbegin = 0; // If the entire strings do not match, string1 does not begin string2
		}
	}
	return isbegin;
}

int main(int argc, char const *argv[])
{
	char string1[100], string2[100]; // Lines for user data
	// Get user data
	printf("Enter in a string: \n");
	fgets(string1, sizeof(string1), stdin);
	printf("Enter another string: \n");
	fgets(string2, sizeof(string2), stdin);
	// Take off any \n
	for (int i = 0; string1[i] != '\0'; ++i) {
		if (string1[i] == '\n')
			string1[i] = '\0';
	}

	if (begins(string1, string2))
		printf("String1 begins string2\n");
	else
		printf("String1 does not begin string2\n");

	return 0;
}
