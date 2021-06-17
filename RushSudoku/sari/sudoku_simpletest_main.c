/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokumain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starnane <starnane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:02:26 by starnane          #+#    #+#             */
/*   Updated: 2021/06/05 17:17:25 by starnane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sudokuintake(int nbr, char **pars, int matrix[9][9]);
void	ft_showmatrix(int matrix[9][9]);

int 	main (int argc, char **argv)
{
	int **matrsize;
	int sudokumatrix[9][9] = {
		{9, 8, 8, 9, 0, 8, 3, 8, 6},
		{2, 3, 4, 5, 4, 5, 6, 7, 9},
		{9, 8, 8, 9, 0, 8, 3, 8, 6},
		{2, 3, 4, 5, 4, 7, 6, 7, 9},
		{9, 8, 8, 9, 0, 8, 3, 8, 6},
		{2, 3, 4, 5, 0, 5, 6, 7, 9},
		{9, 8, 8, 9, 0, 8, 3, 8, 6},
		{2, 3, 5, 5, 4, 5, 6, 7, 9},
		{2, 3, 4, 5, 4, 5, 6, 9, 9},
	};
	
	matrsize = (int**)malloc(sizeof(int**)*9);
	ft_sudokuintake(argc, argv, sudokumatrix);
	ft_sudokufill();
	ft_showmatrix(sudokumatrix);
	free(matrsize);
	
    return (0);
}