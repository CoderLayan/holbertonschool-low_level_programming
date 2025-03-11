#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Creates a 2D array of integers, all initialized to 0.
* @width: The number of columns in the grid.
* @height: The number of rows in the grid.
*
* Return: A pointer to the 2D array, or NULL if width/height <= 0
*         or if memory allocation fails.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i > 0)
{
i--;
free(grid[i]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
