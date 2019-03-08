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
 * string_nconcat - concatenates two strings
 * @s1: string for concatenation
 * @s2: string for concatenation
 * @n: # of bytes of s2 to concat
 *
 * Return: NULL if malloc fails or pointer to concatenated string
 */
char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	int	i, j, len, len1, len2;
	char	*concat;

	/*if NULL is passed, treat it as an empty string*/
	len1 = !s1 ? 0 : _strlen(s1);
	len2 = !s2 ? 0 : _strlen(s2);
	/*if n is greater or equal to the length of s2 then use the entire string s2*/
	len2 = (int) n >= len2 ? len2 : (int) n;
	len = len1 + len2;
	concat = (char *)malloc(sizeof(char) * len + 1);
	/*if the function fails, it should return NULL.*/
	if (!concat)
		return (NULL);
	/**
	 * The returned pointer shall point to a newly allocated space in memory,\
	 * which contains s1, followed by the first n bytes of s2,
	 */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; i < len; i++, j++)
		concat[i] = s2[j];
	/*and null terminated*/
	concat[i] = '\0';
	return (concat);
}
