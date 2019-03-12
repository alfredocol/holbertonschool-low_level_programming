#include "function_pointers.h"

/**
 * int_index - find first matching element using cmp function pointer
 * @array: int array
 * @size: # of elements in array
 * @cmp: pointer to search for matching int from int array
 *
 * Return: index of first element found
 */
int	int_index(int *array, int size, int (*cmp) (int))
{
	int	i;

	/* return error if needed */
	if (!array || size < 1 || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	/* if no match, return -1 */
	return (-1);
}
