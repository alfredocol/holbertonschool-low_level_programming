#include "holberton.h"

/**
 * alloc_grid - creates 2D array of ints
 * @width: # of elements in each sub-array
 * @height: number of sub-arrays
 *
 * Return: 2D int array
 */
int     **alloc_grid(int width, int height)
{
	int     **grid;
	int     i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = (int **)calloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (!grid[i])
			return (NULL);
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
