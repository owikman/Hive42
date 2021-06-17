void	ft_putnbr(int ptr);

int		main(void)
{
	int		a;
	int		*ptr;

	a = 3;
	ptr = &a;
	ft_putnbr(*ptr);
	return (0);
}
