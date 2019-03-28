#include "holberton.h"
/**
 * print_binary - prints the binary representation of a num
 * @n: num to print
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int    m = 2147483648;

	if (n == 0)
	{
		printf("0");
		return;
	}
	/* find the highest magnitude of n */
	while ((m & n) == 0)
	{
		m >>= 1;
		if (!m)
			break;
	}
	/* start printing binary rep of n*/
	while (m)
	{
		printf("%d", !(m & n) ? 0 : 1);
		m >>= 1;
	}
}
