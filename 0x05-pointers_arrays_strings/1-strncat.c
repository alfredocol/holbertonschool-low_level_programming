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
	char	*p;
	int	len;

	while (p[len])
		len++;
	while (*src && n--)
		p[len++] = *src++;
	return (dest);
}
