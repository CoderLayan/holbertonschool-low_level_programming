#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
* print_grid - Prints a 2D grid of integers.
* @grid: The address of the 2D grid.
* @width: The number of columns in the grid.
* @height: The number of rows in the grid.
*
* Return: Nothing.
*/
void print_grid(int **grid, int width, int height)
{
int w, h;
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
{
printf("%d ", grid[h][w]);
}
printf("\n");
}
}
/*
* main - Tests the alloc_grid function.
*
* Return: Always 0.
*/
int main(void)
{
int **grid;
int i;
grid = alloc_grid(6, 4);
if (grid == NULL)
return (1);
print_grid(grid, 6, 4);
printf("\n");
grid[0][3] = 98;
grid[3][4] = 402;
print_grid(grid, 6, 4);
for (i = 0; i < 4; i++)
free(grid[i]);
free(grid);
return (0);
}
