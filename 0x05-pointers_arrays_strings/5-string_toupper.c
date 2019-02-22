#include "holberton.h"

/**
 * string_toupper - changes lowercase up uppercase
 * @s: string
 *
 * Return: uppercased string
 */
char *string_toupper(char *s)
{
	char	*p = s;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p -= 32;
		p++;
	}
	return (s);
}
