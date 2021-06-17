/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_showmatrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:42:01 by starnane          #+#    #+#             */
/*   Updated: 2021/06/06 17:00:54 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_showmatrix(int matrix[9][9])
{
	int i;										// create our counters
	int j;
	char c;

	i = 0;										// starting from 0
	while(i < 9)								// while less than 9
	{
		j = 0;									// same 
		while(j < 9)
		{
			c = matrix[i][j] + 48;				// +48 turns it back to chararcter, print out
			write(1, &c, 1);
			write(1, " ", 1);					// add a space between the numbers
			j++;
		}
		i++;
		write(1, "\n", 1);						// add a line for each row
	}
}
