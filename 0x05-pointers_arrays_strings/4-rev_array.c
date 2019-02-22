#include "holberton.h"

/**
 * reverse_array - reverses order of elements
 * @a: array of ints
 * @n: number of elements
 *
 * Return: ;
 */
void reverse_array(int *a, int n)
{
	int	i = -1;

	while (++i < --n)
	{
		arr[i] += arr[n];
		arr[n] = arr[i] - arr[n];
		arr[i] -= arr[n];
	}
}
