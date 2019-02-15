#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: character
 *
 * Description: checks for uppercase character
 * Return: 1 if c is uppercase or 0 if not
 */
int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
