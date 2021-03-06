#include "holberton.h"
/**
 * _strlen_recursion - returns in length of a string
 * @s: string
 *
 * Return: length of string
 */
int	_strlen_recursion(char *s)
{
	return ((*s) ? (1 + _strlen_recursion(s + 1)) : 0);
}
