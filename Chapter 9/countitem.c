/* countitem -- counts the number of times an item appear in the array.
*/

#include <stdio.h>
#include <stdlib.h>
const int LIST_SIZE = 30;


int count_item(int number, int array[], int length)
{
	if (length == 0) {
		return 0;
	}

	if (array[length-1] == number)
		return (1 + count_item(number, array, length - 1));
	else
		return (count_item(number, array, length - 1));
}

int main(int argc, char const *argv[])
{
	int array[LIST_SIZE];

	for (int i = 0; i < LIST_SIZE; ++i) {
		array[i] = rand() % 20;
		printf("%d ", array[i]);
	}
	fputc('\n', stdout);
	printf("The number %d appears %d times\n", 1, count_item(1, array, LIST_SIZE));

	return 0;
}
