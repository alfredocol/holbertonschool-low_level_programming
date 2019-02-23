#include "holberton.h"

/**
 * issep - checks if character is a separator
 * @c: character
 *
 * Return: 1 if separator, 0 if not
 */
int	issep(char c)
{
	char	*sep = " \n\t,;.!?\"(){}";

	while (*sep)
		if (*sep++ == c)
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes string
 * @s: string
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	char	*p = s;

	while (*p)
	{
		while (*p && issep(*p))
			p++;
		if (*p >= 'a' && *p <= 'z')
			*p -= 32;
		while (*p && !(issep(*p)))
			p++;
	}
	return (s);
}
