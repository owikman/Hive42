/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_showmatrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starnane <starnane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:42:01 by starnane          #+#    #+#             */
/*   Updated: 2021/06/06 08:56:42 by starnane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_showmatrix(int matrix[9][9])
{
	int i;
	int j;
	char c;

	i = 0;
	while(i < 9)
	{
		j = 0;
		while(j < 9)
		{
			c = matrix[i][j] + 48;
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
