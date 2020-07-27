/* nonwhite -- takes a single string as an argument and returns a pointer to the first nonwhite character
*/

#include <stdio.h>

char * nonwhite (char * string);

int main(int argc, char const *argv[])
{
	printf("%s\n", nonwhite("   HEllo"));
	return 0;
}

char *nonwhite (char * string)
{

	while(string[0] == ' ' || string[0] == '\t' || string[0] == '\n')
		++string;

	return string;
}