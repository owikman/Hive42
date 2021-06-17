#include <unistd.h>

void putchar(char *str)
{
	if (str)
	{

	}
	char c = 'z';
	char n = '\n';
	write(1, &c, 1);
	write(1, &n, 1);
}
int main(void)
{
	putchar("abc");
	return (0);
}
