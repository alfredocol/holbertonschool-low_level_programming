#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: diff
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1) && (*s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/**
 * _strstr - finds the first occurrence of the substring needle
 * @haystack: string
 * @needle: string
 *
 * Return: starting position of needle in hackstack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int	i = 0;

	while (*(haystack + i))
	{
		if (!(_strcmp(haystack + i, needle)))
			return (haystack + i);
		i++;
	}
	return (NULL);
}
