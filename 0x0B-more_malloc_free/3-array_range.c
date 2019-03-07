#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: start of array
 * @max: end of array
 *
 * Return: pointer to array with ordered n elements with values min..max
 */
int	*array_range(int min, int max)
{
	int	size, *arr, i;

	/*If min > max, return NULL*/
	if (min > max)
		return (NULL);
	size = max == min ? 1 : max - min + 1;
	/*If size < 0, invert sign*/
	size = size < 0 ? -size : size;
	arr = (int *)malloc(sizeof(int) * size);
	/*If malloc fails, return NULL*/
	if (!arr)
		return (NULL);
	for (i = 0; i < size; i++, min++)
		arr[i] = min;
	return (arr);
}
