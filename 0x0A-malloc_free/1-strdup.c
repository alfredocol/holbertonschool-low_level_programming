#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
int     _strlen(char *s)
{
	int     len = 0;

	while (s[len])
		len++;
	return (len);
}
/**
 * _memcpy - copies memory area.
 * @dest: string
 * @src: string
 * @n: # of bytes to copy
 *
 * Return: pointer to dest
 */
char    *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int    i = -1;

	while (++i < n)
		dest[i] = src[i];
	return (dest);
}
/**
 * _strdup - duplicates string
 * @str: string
 *
 * Return: pointer to duplicate string
 */
char	*_strdup(char *str)
{
	int	len = _strlen(str);
	char	*p = !len ? NULL : (char *)malloc(len);

	if (!p)
		return (NULL);
	return (_memcpy(p, str, len));
}
