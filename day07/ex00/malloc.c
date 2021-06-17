#include <stdlib.h>
#define  LEN 42

void	ft_putstr(char const *s);

void    ft_putchar(char c);

int 	main()
{
	int i;
	char *str;

	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (1 % 10);
		i++;

	}
	str[i] = '\0';
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
