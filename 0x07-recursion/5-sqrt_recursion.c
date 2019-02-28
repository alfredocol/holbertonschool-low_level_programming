#include "holberton.h"
/**
 * _sqrt - returns natural sqrt of number
 * @sq: square
 * @sqrt: possible sqrt to test
 *
 * Return: int
 */
int	_sqrt(int sq, int sqrt)
{
	if (sqrt * sqrt == sq)
		return (sqrt);
	if (sqrt * sqrt > sq)
		return (-1);
	return (_sqrt(sq, sqrt + 1));
}
/**
 * _sqrt_recursion - returns natural sqrt of number
 * @n: int
 *
 * Return: int
 */
int	_sqrt_recursion(int n)
{
	if (!n)
		return (0);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, 2));
}
