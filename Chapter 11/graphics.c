/* graphics.c -- creates rudementary graphics based on setting the bit in an array
*/

#include <stdio.h>

#define X_SIZE 40
#define Y_SIZE 40

// Use X_SIZE/8 because we pack 8 bits per byte

char graphics[X_SIZE / 8] [Y_SIZE];

#define SET_BIT(x,y) graphics[(x)/8][y] |= (0x80 >> ((x) % 8));
#define DEL_BIT(x,y) graphics[(x)/8][y] &= ~(0x80 >> ((x) % 8));
#define TEST_BIT(x,y) graphics[(x)/8][y] == (0x80 >> ((x) % 8));

void print_graphics(void);

int main(int argc, char const *argv[])
{
	int loc;


	for (loc = 0; loc < X_SIZE; ++loc)
		SET_BIT(loc, loc);
	// DEL_BIT(20,20);
	print_graphics();
	/* int x = TEST_BIT(20,20);
	int y = TEST_BIT(30,30);
	printf("%d %d", x, y); */

	return 0;
}

void print_graphics(void)
{
	int x; // current x byte
	int y; // current y byte
	unsigned int bit; // bit we are testing in the current byte

	for (y = 0; y < Y_SIZE; ++y) {
		// Loop for each byte in the array
		for (x = 0; x < X_SIZE / 8; ++x) {
			// Handle each bit
			for (bit = 0x80; bit > 0; bit = (bit >> 1)) {
				if ((graphics[x][y] & bit) != 0)
					printf("\\");
				else
					printf(" ");
			}
		}
		fputc('\n', stdout);
	}
}