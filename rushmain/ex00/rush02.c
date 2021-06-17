/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaliber <egaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:39:42 by apirmeh           #+#    #+#             */
/*   Updated: 2021/05/30 16:54:45 by egaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printer(int line, int column, int x, int y)
{
	if (line == 1)
	{
		if (column == 1)
			ft_putchar('A');
		else if (column == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (line == y)
	{
		if (column == 1)
			ft_putchar('C');
		else if (column == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (column == 1 || column == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

int		rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	if (x < 0 || y < 0)
		return (0);
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			printer(line, column, x, y);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
	return (0);
}
