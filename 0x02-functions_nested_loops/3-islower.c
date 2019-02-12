#include "holberton.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _islower - returns 1 if c is lowercase and 0 if not
 * @c:  int
 *
 * Description: returns 1 if c is lowercaase and 0 if not
 * Return: 0 if not lowercase and 1 if lowercase
*/
int	_islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
