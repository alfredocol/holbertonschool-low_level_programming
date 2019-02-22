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

	while (*p++)
		;
	while (*src && n--)
		*p++ = *src++;
	return (dest);
}
