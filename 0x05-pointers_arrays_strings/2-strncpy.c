#include "holberton.h"

/**
 * _strncpy - copies n chars from src to dest
 * @dest: string
 * @src: string
 * @n: number of elements fo copy
 *
 * Return: copied str
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s = src, *d = dest;

	while (*s && n--)
		*d++ = *s++;
	while (n--)
		*d++ = '\0';
	return (dest);
}
