/* mutltbl = prints out the multiplication table
*/

#include <stdio.h>
const int MAXNUM = 10;

int main(int argc, char const *argv[])
{
	int i, j;

	for (i = 1; i < 10; ++i) {
		for (j = 1; j < 10; ++j)
			printf("%2d ", j * i);
		fputc('\n', stdout);
	}
	
	return 0;
}