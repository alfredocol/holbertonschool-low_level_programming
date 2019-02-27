#include "holberton.h"
#include <stdio.h>

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not
 */
int	is_palindrome(char *s)
{
	static int	i, len;
	int		palindrome = 1;

	if (!len)
	{
		while (s[len])
			len++;
		len--;
	}
	if (i < len)
	{
		if (s[i] == s[len])
		{
			len--;
			i++;
			is_palindrome(s + i);
		}
		else
			palindrome = 0;
	}
	i = 0;
	len = 0;
	if (!palindrome || !s)
		return (0);
	return (1);
}
