#include "holberton.h"

/**
 * factorial - returns factorial of given number
 * @n: integer
 *
 * Return: factorial of n
 */
int	factorial(int n)
{
	if (!n)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
