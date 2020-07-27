#include <stdio.h>

int main() {

	unsigned long int n = 1108690;
	unsigned long int counter = 86355;

	while (1) {
		unsigned long c = 2;

	for (c = 2; c <= n - 1; ++c) {
		if (n%c == 0) {
			break;
		}
	}
		if (c == n) {
			++counter;
			printf("%u %u\n", counter, n);
		}
		++n;
	}
	return 0;
}