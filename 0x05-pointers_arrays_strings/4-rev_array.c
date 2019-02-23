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
		a[i] += a[n];
		a[n] = a[i] - a[n];
		a[i] -= a[n];
	}
}
