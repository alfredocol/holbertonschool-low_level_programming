#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: string
 * @b: character to fill s with
 * @n: number of bytes to fill
 *
 * Return: pointer to s
 */

void    _memset(char *s, char b, int n)
{
	char    *p = s;

	while (n--)
		*p++ = b;
}
/**
 * _strlen - returns len of string
 * @s: string
 *
 * Return: len of string
 */
int     _strlen(char *s)
{
	int     len;

	for (len = 0; s[len]; len++)
		;
	return (len);
}
/**
 * rev_numstring - that reverses a string.
 * @s: string
 * @size: len of string
 */
void    rev_numstring(char *s, int size)
{
	int	len;
	int	i;
	char	temp;

	while (--size && s[size] == '0')
		;
	len = size;
	for (i = 0; i < len; i++, len--)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		printf("%s\n", s);
	}
}
/**
 * infinite_add - adds two numstrings.
 * @m: numstring 1
 * @n: numstring 2
 * @r: container to sumstring
 * @size: size of r container
 *
 * Description: that reverses a string.
 * Return: void
 */
char *infinite_add(char *n, char *m, char *r, int size)
{
	int	nlen = _strlen(n);
	int	mlen = _strlen(m);
	int	carryover = 0;
	int	i, j;

	/* error check */
	if (!n || !m || !r || mlen - 1 > size || nlen - 1 > size)
		return (0);
	/* set all elements to 0 */
	_memset(r, 0, size);
	for (i = 0; i < size; i++)
	{
		/* update value of arr[i] */
		if (mlen)
			r[i] += m[--mlen] - '0';
		if (nlen)
			r[i] += n[--nlen] - '0';
		if (!mlen && !nlen)
			break;
	}
	/* update carryover */
	for (j = 0; j <= i; j++)
	{
		r[j] += carryover;
		carryover = r[j] > 9 ? r[j] / 10 : 0;
		r[j] = r[j] > 9 ? r[j] % 10 : r[j];
		r[j] += '0';
	}
	if (carryover)
		r[j] = carryover + '0';
	rev_numstring(r, j + 1);
	return (r);
}
