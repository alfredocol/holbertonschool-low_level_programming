#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: string
 * @src: string
 * @n: # of bytes to copy
 *
 * Return: pointer to dest
 */
char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i = -1;

	while (++i < n)
		dest[i] = src[i];
	return (dest);
}
