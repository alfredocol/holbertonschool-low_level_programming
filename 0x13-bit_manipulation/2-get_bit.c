#include "holberton.h"
/**
 * get_bit - returns the value of a but at a given index
 * @n: int
 * @index: int
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int    m = 1;

	/* avoid overflow */
	if (index > 31)
		return (-1);
	/* get to the magnitude/bit for index value */
	while (index--)
		m <<= 1;
	return ((n & m) ? 1 : 0);
}
