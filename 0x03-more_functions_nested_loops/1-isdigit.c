#include "holberton.h"

/**
 * _isdigit - returns 1 if c is a digit
 * @c: possible digit
 *
 * Description: returns 1 if c is a digit
 * Return: 1 if digit or 0 if not
 */
int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
