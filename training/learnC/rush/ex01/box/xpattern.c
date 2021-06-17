#include <stdio.h>

int main() {
	int row, column, nrrows = 5;
	for (row = 0; < nrrows; row++ ){
		for (column = 0; < nrrows; column++ ){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}