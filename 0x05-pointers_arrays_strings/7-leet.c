#include "holberton.h"

/**
 * leet - encodes string in 1337
 * @s: string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char	*l = "aAeEoOtTlL";
	char	*rot = "4433007711";
	char	*p = s;
	int	i;

	while (*p)
	{
		i = 0;
		while (l[i])
		{
			if (l[i] == *p)
				*p = rot[i];
			i++;
		}
		p++;
	}
	return (s);
}
