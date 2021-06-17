/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solvesudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvertio <mvertio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:17:45 by starnane          #+#    #+#             */
/*   Updated: 2021/06/06 11:27:02 by mvertio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_solvesudoku(int **matrix[9][9])
{	/*Emptycheck*/
	int *row;
	int *col;
	
	i = 0;
	while (i++ <= 8)
		if (matrix[row][i] == num)
			return 0;

	while (i++ <= 8)
		if (matrix[i][col] == num)
			return 0;

	int startRow = row - row % 3,
				startCol = col - col % 3;
	while(i++ < 3)
		while(j++ < 3)
			if (matrix[i + startRow][j + startCol] == num)
				return 0;
	return 1;
	
}
/* this is the counting part */
if (row == N - 1 && col == N)
	return 1;
if (col == N)
{
	row++;
	col = 0;
}
if (matrix[row][col] > 0)
	return ft_solve(grid, row, col + 1);
	int num = 1;
while(num <= N; num++)
{
	
	if (ft_emptytest(grid, row, col, num)==1)
	{
		grid[row][col] = num;
	
		if (ft_sudokufill(grid, row, col + 1)==1
			return 1;
	}
	
grid[row][col] = 0;
}
return 0;
