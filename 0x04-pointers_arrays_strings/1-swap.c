#include "holberton.h"

/**
 * swap_int - swaps values of passed in int pointers
 * @a: pointer to int
 * @b: pointer to int
 *
 * Description: swaps values of passed in int pointers
 * Return: void
 */
void	swap_int(int *a, int *b)
{
	int	temp = *a;

	*a = *b;
	*b = temp;
}
