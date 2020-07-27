/* zerol -- uses pointers to zero out an array
*/

#include <stdio.h>

#define LIST_SIZE 100

int main(int argc, char const *argv[])
{
	int list[LIST_SIZE];
	int * ptr = list;
	int i;
	for (i = 0; ptr - list < LIST_SIZE; ++ptr, ++i) {
		*ptr = 0;
		printf("%d %d\n", ptr, &list[i]);
	}
	for (i = 0; i < LIST_SIZE; ++i)
		printf("%d ", list[i]);
	return 0;
}
