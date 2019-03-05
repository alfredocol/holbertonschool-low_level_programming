#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string
 * @b: character to fill s with
 * @n: number of bytes to fill
 *
 * Return: pointer to s
 */
char    *_memset(char *s, char b, unsigned int n)
{
	char    *p = s;

	while (n--)
		*p++ = b;
	return (s);
}
/**
 * create_array - creates an array of chars, and\
 * initializes it with a specific char.
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: string
 */
char	*create_array(unsigned int size, char c)
{
	char	*p = (char *)malloc(size);

	return (!p || !size ? NULL : _memset(p, c, size));
}
