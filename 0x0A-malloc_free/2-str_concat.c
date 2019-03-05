#include "holberton.h"

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

	return (!p ? NULL : _strcat(_strcpy(s1, s2), s2));
}
