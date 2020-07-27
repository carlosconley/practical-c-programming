#include <stdio.h>
#include <stdlib.h>

const int MAX_LINE = 30;

unsigned long int recurfact(int num);

unsigned long int nonrefact(int num);

int main(int argc, char const *argv[])
{
	int number;

	scanf("%d", &number);
	printf("%lu\n", nonrefact(number));
	printf("%lu\n", nonrefact(number));
	
	return 0;
}

unsigned long int recurfact(int num)
{
	if (num < 1)
		return 1;
	else 
		return num * recurfact(num-1);
}

unsigned long int nonrefact(int num)
{
	int fact = 1;

	for (num; num > 0; --num) {
		fact *= num;
	}

	return fact;
}