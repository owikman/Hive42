/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirmeh <apirmeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:49:40 by apirmeh           #+#    #+#             */
/*   Updated: 2021/05/30 16:51:46 by apirmeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printer(int line, int column, int x, int y)
{
	if (line == 1 || line == y)
	{
		if (column == 1 || column == x)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (column == 1 || column == x)
			ft_putchar('|');
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
