/* fdiv3 -- takes a file and writes two files
	one with numbers divisible by three, and one with all the other numbers'
	Param -- only takes files that contain only numbers, one number per line.
		Numbers that are on the same line as the first are discarded
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE * in_file = fopen("input.txt", "r");
	FILE * three_file = fopen("three.txt", "w");
	FILE * num_file = fopen("numbers.txt", "w");
	int num;
	while (fscanf(in_file, "%d", &num) != -1){
		if (num % 3 == 0)
			fprintf(three_file,"%d\n", num);
		else
			fprintf(num_file, "%d\n", num);
	}

	fclose(in_file);
	fclose(three_file);
	fclose(num_file);

	return 0;
}
