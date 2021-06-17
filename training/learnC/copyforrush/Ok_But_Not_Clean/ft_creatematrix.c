/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creatematrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:06:46 by starnane          #+#    #+#             */
/*   Updated: 2021/06/06 17:02:55 by owikman          ###   ########.fr       */
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
int		ft_solvesudoku(int *matrix[9][9]);				//the parameters used for the function, 9 by 9

int		*ft_atoirow(char *str)							// continues here
{
	int		i;											// creates its own variables, i for index counting
	int		*rowptr;									// a new pointer, empty 
	
	rowptr = (int*)malloc(sizeof(int*) * 9);			// count how much space we need in our new destination from our pointer
	i = 0;												// give index value 0
	if (ft_strlen(str) != 9)							// check for error, if the string length is not 9 give error
	{
		ft_putstr("Error\n");
		return(0);
	}
	while (str[i] != '\0')								// while our string length incrament hasnt hit the end of the line, we continue
	{
		if (str[i] >= '1' && str[i] <= '9')				// we convert our index value to intergers
			rowptr[i] = str[i] - 48;					// turn into ascii readable
		if (str[i] == '.')								// convert all . to 0
			rowptr[i] = 0;								// here we would call out for solve sudoku if we'd have it
		i++;											// incrament until done
	}													// back down
	return(rowptr);										// return the rowptr, has all the intergers
}

int		*ft_creatematrix(int nbr, char **params)			// starting of here
{
	int		sudokumatrix[9][9];								// creates 9 times 9 empty table
	int		i;												// to count the while loops
	int		k;
	char	*sptr;											// Our pointers, empty
	int		*rowptr;										
		
	i = 0;													// initialize i = 0
	k = 1;													// initialize k to 1, start from the second
	sptr = *params;
	if (nbr - 1  == 9)										// delete one because we dont want the name
	{
		while (k <= nbr - 1)								// compare our k with nbr -1
		{
			sptr = params[k];								// taking the first line of parameter and putting it into our string pointer
			rowptr = ft_atoirow(sptr);						// send the string to ft_atoirow^
			while (i < 9)									// continue from here, while index value is less than 9
			{
				sudokumatrix[k - 1][i] = rowptr[i];			// check what row its on, and what box on the row it is, x and y coordinates
				i++;										// incrament
			}
			i = 0;											// filling the first row with intergers of the matrix
			k++;											// we incrament our K starting from 1, until rows are done
		ft_showmatrix(sudokumatrix);						// time to print/show, should go to solve
	}
	else
		ft_putstr("Error\n");
	return (0);
}
