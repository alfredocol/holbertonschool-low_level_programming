#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to zero
 * @n: int
 * @index: index of int to turn off
 * Return: 1 if worked, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int    m = 1;

	/* avoid overflow */
	if (index > 31)
		return (-1);
	while (index--)
		m <<= 1;
	*n -= (*n & m) ? m : 0;
	return (1);
}
