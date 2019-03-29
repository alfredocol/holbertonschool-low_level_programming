#include "holberton.h"
/**
 * flip_bits - counts bits needed to flip to get both to ==
 * @n: num 1
 * @m: num 2
 * Return: num of bits to flip
 */
unsigned	int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int	mag, count = 0, bits = sizeof(n) * 8;

	/* account for n = 0 and m = 0, plus returns early for other same n && m's */
	if (n == m)
		return (count);
	/* loop through bits, count bits to flip */
	for (mag = 1; bits--; mag <<= 1)
		count += (mag & n) != (mag & m);
	return (count);
}
