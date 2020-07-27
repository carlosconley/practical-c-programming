#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int htoi(char s[]);

int main()
{

	char str[] = "adf";
	int decimal = htoi(str);
	printf("%d\n", decimal);

		
	return 0;
}


int htoi(char s[]) {
	int total = 0;
	int i, digit;
	//loops through every single char in the string
	for (i = 0; s[i] != '\0'; i++) { /* loop until the end of the string*/
		digit = s[i];
		//checks to see if char is within 0-9
		if (isdigit(digit)) {
			total = (total * 16) + (digit - '0');
		//checks to see if char is within a - f
		} else if (tolower(s[i]) <= 'f' && tolower(s[i]) >= 'a') {
			total = (total * 16) + (tolower(s[i]) - 87);
		}
	}

	return total;
}