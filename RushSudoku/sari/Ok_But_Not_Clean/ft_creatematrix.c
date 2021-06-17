/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creatematrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starnane <starnane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:06:46 by starnane          #+#    #+#             */
/*   Updated: 2021/06/06 16:14:25 by starnane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*after line 72 you would call the ft_solvesudoku.c giving it as parameter the
sudokumatrix and waiting to get back true=1 or false=0 to know if you can launch
the solution printing by calling ft_showmatrix(sudokumatrix). This is not ready
yet, so this time we pass this phase.*/
#include <stdlib.h>

void	ft_putstr(char *str);
int		ft_strlen(char *ptr);
void	ft_showmatrix(int matrix[9][9]);
int		ft_solvesudoku(int *matrix[9][9]);

int		*ft_atoirow(char *str)
{
	int		i;
	int		*rowptr;
	
	rowptr = (int*)malloc(sizeof(int*) * 9);
	i = 0;
	if (ft_strlen(str) != 9)
	{
		ft_putstr("Error\n");
		return(0);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '9')
			rowptr[i] = str[i] - 48;
		if (str[i] == '.')
			rowptr[i] = 0;
		i++;
	}
	return(rowptr);
}

int		*ft_creatematrix(int nbr, char **params)
{
	int		sudokumatrix[9][9];
	int		i;
	int		k;
	char	*sptr;
	int		*rowptr;
		
	i = 0;
	k = 1;
	sptr = *params;
	if (nbr - 1  == 9)
	{
		while (k <= nbr - 1)
		{
			sptr = params[k];
			rowptr = ft_atoirow(sptr);
			while (i < 9)
			{
				sudokumatrix[k - 1][i] = rowptr[i];
				i++;
			}
			i = 0;
			k++;
		}
		ft_showmatrix(sudokumatrix);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
