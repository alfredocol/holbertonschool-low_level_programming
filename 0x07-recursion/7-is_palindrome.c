#include "holberton.h"
/**
 * _strlen_recursion - returns in length of a string
 * @s: string
 *
 * Return: length of string
 */
int     _strlen_recursion(char *s)
{
	return ((*s) ? (1 + _strlen_recursion(s + 1)) : 0);
}
/**
 * palindrome - checks if string is palindrome
 * @s: string
 * @i: starting element index #
 * @j: ending element index #
 *
 * Return: 1 if palindrome, 0 if not
 */
int	palindrome(char *s, int i, int j)
{
	if (i < j)
	{
		if (s[i] == s[j])
			return (palindrome(s, ++i, --j));
		else
			return (0);
	}
	return (1);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not
 */
int	is_palindrome(char *s)
{
	int	len =  _strlen_recursion(s);

	if (!len)
		return (0);
	return (palindrome(s, 0, len - 1));
}
