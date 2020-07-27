/* lsum -- find the sum of all of the numbers in an array
*/

#include <stdio.h>
#include <time.h>

int array[490000000];

int main(int argc, char const *argv[])
{
	int * ptr = &array[0];
	int i;
	for (i = 0; i < (sizeof(array)/(sizeof(*ptr))); ++i, ++ptr) {
		*ptr = i;
	}
	ptr -= (ptr - array);
	unsigned long long int sum;
	for (i = 0; i < (sizeof(array)/(sizeof(*ptr))); ++ptr, ++i) {
		sum += *(ptr);
	}

	printf("%f seconds\n",(double) clock()/ CLOCKS_PER_SEC);
	printf("%llu", sum);
	return 0;
}
