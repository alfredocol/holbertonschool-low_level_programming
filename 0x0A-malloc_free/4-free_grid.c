#include "holberton.h"

/**
 * free_grid - frees malloc'd grid memory
 * @grid: 2D int array
 * @height: # of subarrays
 *
 * Return: void
 */
void	free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	if (grid)
		free(grid);
}
