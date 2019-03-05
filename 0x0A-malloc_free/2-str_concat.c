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
 * _strcat - concats src to dest
 * @dest: string
 * @src: string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int     len = 0;
	char    *p = dest;

	while (p[len])
		len++;
	while (*src)
		p[len++] = *src++;
	p[len] = '\0';
	return (dest);
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
 * str_concat - concatentates two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int	len = _strlen(s1) + _strlen(s2);
	char	*p = !len ? NULL : (char *)malloc(len - 1);

	if (!p)
		return (NULL);
	p = _strcpy(p, s1);
	p = _strcat(p, s2);
	return (p);
}
