#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The address of the 2D grid.
 * @height: The number of rows in the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
