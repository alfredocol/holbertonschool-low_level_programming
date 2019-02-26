#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes to match
 *
 * Return: pointer to the byte in s that matches \
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int	i = 0;
	int	j;

	while (*(s + i))
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
