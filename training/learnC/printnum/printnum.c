#include <unistd.h>

void print_numbers(void)
{
	write(1, "0123456789\n", 11);
}

int main(void)
{
	write(1, "0123456789\n", 11);
	return(0);
}
