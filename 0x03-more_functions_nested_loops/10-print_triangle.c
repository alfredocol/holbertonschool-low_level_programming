#include "holberton.h"

/**
 * print_triangle - prints triangle followed by a new line
 * @size: size of triangle
 *
 * Description: prints triangle followed by a new line
 * Return: ;
 */
void	print_triangle(int size)
{
	int	line, spaces, hashes;
	/*if size > 0*/
	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			spaces = size - line - 1;
			hashes = line + 1;
			while (spaces--)
				_putchar(' ');
			while (hashes--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
