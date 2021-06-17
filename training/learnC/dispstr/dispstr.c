#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	char c;

	c = 0;
	while(str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}
int main(void)
{
	ft_putstr("robin");
	ft_putchar('\n');
	return (0);
}
