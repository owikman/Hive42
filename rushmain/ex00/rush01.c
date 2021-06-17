/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:09:27 by owikman           #+#    #+#             */
/*   Updated: 2021/05/30 17:09:30 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printer(int line, int column, int x, int y)
{
	if (line == 1)
	{
		if (column == 1)
			ft_putchar('/');
		else if (column == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (line == y)
	{
		if (column == 1)
			ft_putchar('\\');
		else if (column == x)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (column == 1 || column == x)
			ft_putchar('*');
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
