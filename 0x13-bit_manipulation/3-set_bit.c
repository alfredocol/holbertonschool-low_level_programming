#include "holberton.h"
/**
 * set_bit - sets the value of a bit to one
 * @n: int
 * @index: index of int to turn on
 * Return: 1 if worked, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int    m = 1;

	/* avoid overflow */
	if (index > 31)
		return (-1);
	while (index--)
		m <<= 1;
	*n += (*n & m) ? 0 : m;
	return (1);
}
