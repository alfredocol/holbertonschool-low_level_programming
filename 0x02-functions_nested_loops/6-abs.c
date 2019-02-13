#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer
 *
 * Description: computes the absolute value of an integer
 * Return: returns absolute value of passed in integer
 */
int	_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
