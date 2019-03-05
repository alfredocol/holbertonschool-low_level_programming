#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string
 * @b: character to fill s with
 * @n: number of bytes to fill
 *
 * Return: pointer to s
 */
char    *_memset(char *s, char b, unsigned int n)
{
	char    *p = s;

	while (n--)
		*p++ = b;
	return (s);
}
/**
 * create_array - creates an array of chars, and\
 * initializes it with a specific char.
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: string
 */
char	*create_array(unsigned int size, char c)
{
	char	*p = (char *)malloc(size);

	return (!p || !size ? NULL : _memset(p, c, size));
}
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if  (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
