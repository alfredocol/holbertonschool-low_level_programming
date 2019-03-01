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
	int	i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
