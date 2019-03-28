#include "holberton.h"
/**
 * flip_bits - counts bits needed to flip to get both to ==
 * @n: num 1
 * @m: num 2
 * Return: num of bits to flip
 */
unsigned	int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int   m2 = 1, count = 0;

	if (n == m)
		return (count);
	while (m2 <= n || m2 <= m)
	{
		if ((m2 & n) != (m2 & m))
			count++;
		m2 <<= 1;
	}
	return (count);
}
