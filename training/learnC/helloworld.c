#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void answer(char **argv)

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}