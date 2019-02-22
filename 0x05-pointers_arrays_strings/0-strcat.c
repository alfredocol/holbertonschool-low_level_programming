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
	char	*p = dest;
	
	if (*src)
		*src;
	while (*p++)
		;
	while (*src)
		*p++ = *src++;
	return (dest);
}
