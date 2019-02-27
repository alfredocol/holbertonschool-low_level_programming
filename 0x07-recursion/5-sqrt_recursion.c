#include "holberton.h"

/**
 * _sqrt_recursion - returns natural sqrt of number
 * @n: int
 *
 * Return: int
 */
int	_sqrt_recursion(int n)
{
	static	int sqrt;

	sqrt++;
	if (!n)
	{
		sqrt = 1;
		return (0);
	}
	if (n < 0 || sqrt * sqrt > n)
	{
		sqrt = 1;
		return (-1);
	}
	if ((sqrt * sqrt) == n)
	{
		sqrt = 1;
		return (n);
	}
	return (_sqrt_recursion(n));
}
