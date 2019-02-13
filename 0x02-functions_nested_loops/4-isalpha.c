#include "holberton.h"

/**
 * _isalpha - returns 1 if c is uppercase || _islower
 * @c: ascii character
 *
 * Description: returns 1 if c is uppercase || _islower
 * Return: returns 1 if c is uppercase || _islower
 */
int	_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
