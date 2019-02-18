#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
int		_strlen(char *s)
{
	int	len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * rev_string - that reverses a string.
 * @s: string
 *
 * Description: that reverses a string.
 * Return: void
 */
void	rev_string(char *s)
{
	int	i, len = _strlen(s);
	char	temp;

	i = 0;
	while (i < len--)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
	}
}
