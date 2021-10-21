#include <stdlib.h>
#include "holberton.h"
/**
* free_grid - function frees 2 diminesional grid made by function alloc_grid
* @grid: is double pointer, has the address of a 2D grid in the form of an int
* @height: height of the grid in the form of an integer
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
free(grid[i]);
}
free(grid);
}
