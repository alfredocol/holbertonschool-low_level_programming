#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
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
char	*_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i); ++i)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
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
	if (!*str)
	{
		dupe = (char *)malloc(1);
		dupe[0] = *str;
	}
	else
	{
		dupe = (char *)malloc(len + 1);
		dupe = _strcpy(dupe, str);
	}
	return (dupe);
}
