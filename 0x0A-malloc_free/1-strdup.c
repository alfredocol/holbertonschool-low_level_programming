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
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @src: string to be copied from
 * @dest: string to be copied to
 *
 * Description: copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * Return: pointer to dest
 */
char    *_strcpy(char *dest, char *src)
{
	int     i = 0;
	char    *p = dest;

	while (src[i])
	{
		*p++ = src[i];
		i++;
	}
	*p = 0;
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
	int	len;
	char	*dupe;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	dupe = (char *)malloc(len + 1);
	return (_strcpy(dupe, str));
}
