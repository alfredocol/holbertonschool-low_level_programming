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
 * str_concat - concatentates two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer to concatenated string
 */
char	 *str_concat(char *s1, char *s2)
{
	int	len, len1, len2, i, j;
	char	*str;

	len1 = !s1 ? 0 : _strlen(s1);
	len2 = !s2 ? 0 : _strlen(s2);
	len = len1 +  len2;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
