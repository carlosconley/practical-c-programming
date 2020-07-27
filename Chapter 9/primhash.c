/* primhash -- creates a primitive hash code by adding up the
 * values of the charcters in an array
 */
#include <stdio.h>
#include <stdlib.h>

int create_hash (char array[])
{
	int hash = 0;
	for (int i = 0; array[i] != '\0'; ++i)
		hash += array[i];
	return hash;
}
int main(int argc, char const *argv[])
{
	char list[] = "Hello it is i";

	fputc('\n', stdout);

	printf("%d is the hash\n", create_hash(list));

	return 0;
}
