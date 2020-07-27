#include <stdio.h>

int main()																
{
	
	for (int a = 0; a < 8; ++a) {

		for (int i = 0; i < 8; ++i)
			printf("+-----");
		
		printf("+\n");
		
		for(int c = 0; c < 3; ++c) {
			
			for (int b = 0; b < 8; ++b)
				printf("|     ");
			
			printf("|\n");
		}
	}

	for (int i = 0; i < 8; ++i)
			printf("+-----");
		printf("+\n");

	return 0;
}


