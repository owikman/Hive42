int ft_ispos(int matrix[N][N], int row, int col, int num)
{ 
	int x;
  	x = 0;
	int y;
	y = 0;
    while (x++ <= 8)
        if (matrix[row][x] == num)
            return 0;

    while (x++ <= 8)
        if (matrix[x][col] == num)
            return 0;

    int startRow = row - row % 3,
                startCol = col - col % 3;
    while(x++ < 3)
        while(y++ < 3)
            if (matrix[x + startRow][y + startCol] == num)
                return 0;
    return 1;
    
}
int ft_solvesudoku(int matrix[N][N], int row, int col)
{
if (row == N - 1 && col == N)
    return 1;
if (col == N)
{
    row++;
    col = 0;
}
if (matrix[row][col] > 0)
    return ft_solvesudoku(matrix, row, col + 1);

    int num;
	num = 1;
while(num <= N)
num++;
{
    
    if (ft_ispos(matrix, row, col, num)==1)
    {
        matrix[row][col] = num;
    
        if (ft_solvesudoku(matrix, row, col + 1)==1)
            return 1;
    }
    
matrix[row][col] = 0;
}
return 0;
}