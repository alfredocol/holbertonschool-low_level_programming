#include "holberton.h"

/**
 * _strncat - concat n char of src to dest
 * @dest: string
 * @src: string
 * @n: number of elements fo copy
 *
 * Return: concatenated str
 */
char *_strncat(char *dest, char *src, int n)
{
	char	*p = dest;
	int	len = 0;

	while (p[len])
		len++;
	while (*src && n--)
		p[len++] = *src++;
	p[len] = 0;
	return (dest);
}
