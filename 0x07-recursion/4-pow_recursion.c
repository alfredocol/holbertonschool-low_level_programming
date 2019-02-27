#include "holberton.h"

/**
 * _pow_recursion - returns value of x ^ y
 * @x: base number
 * @y: exponent
 *
 * Return: integer
 */
int	_pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	return (x);
}
