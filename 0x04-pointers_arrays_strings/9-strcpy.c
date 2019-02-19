#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @src: string to be copied from
 * @dest: string to be copied to
 *
 * Description: copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * Return: pointer to dest
 */
char	*_strcpy(char *dest, char *src)
{
	int	i = 0;
	char	*p = dest;

	while (src[i])
	{
		*p++ = src[i];
		i++;
	}
	*p = 0;
	return (dest);
}
