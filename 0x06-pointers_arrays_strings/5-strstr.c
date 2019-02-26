#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: diff
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s2) && (*s1))
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		if (!(*s2))
			break;
	}
	return (1);
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

	if (!needle)
		return (haystack);
	while (*(haystack + i))
	{
		if (_strcmp(haystack + i, needle))
			return (haystack + i);
		i++;
	}
	return (NULL);
}
