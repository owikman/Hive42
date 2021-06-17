#include <stdio.h>

int		main(void)
{
	int x;

	x = 5;
	while (x > 0){			// While X is greater than zero, repeat the following:
		printf("I am now running another repetition... \n");
		printf("The value of X = %d\n", x);
		x--;
	}
}