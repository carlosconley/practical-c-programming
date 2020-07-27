/* allmacros -- a file that holds all of the macros for the exercises
*/

#include <stdio.h>

#define DIVTEN(x) ((x) % 10 == 0)
#define is_digit(x) ((x) == 1 || (x) == 2 || (x) == 3 || (x) == 4 || (x) == 5 || (x) == 6 || (x) == 7 ||(x) == 8 || (x) == 9 || (x) == 0)
#define swap(x,y) (y) += (x); (x) -= (y); (x)-= (2 * (x)); (y) -= (x);

int main(int argc, char const *argv[])
{
	int x = 1;
	int y = 2;
	swap(x,y);
	printf("%d %d", x, y);
}
