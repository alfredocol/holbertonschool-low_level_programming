#include "holberton.h"

/**
 * _strcat - concats src to dest
 * @dest: string
 * @src: string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int	len = 0;
	char	*p = dest;

	while (p[len])
		len++;
	while (*src)
		p[len] = *src++;
	return (dest);
}
