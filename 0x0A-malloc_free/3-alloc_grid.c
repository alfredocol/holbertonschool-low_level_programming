#include "holberton.h"

/**
 * alloc_grid - creates 2D array of ints
 * @width: # of elements in each sub-array
 * @height: number of sub-arrays
 *
 * Return: 2D int array
 */
int	**alloc_grid(int width, int height)
{
	int	**grid = (int **)malloc(sizeof((width * height)));
	int	i, j;

	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(width));
		if (!grid[i])
			return (NULL);
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
