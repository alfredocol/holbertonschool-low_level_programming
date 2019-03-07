#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to reserve
 *
 * Return: void pointer to malloc'd memory or exits with code of 98
 */
void	*malloc_checked(unsigned int b)
{
	void	*mal;

	mal = malloc(b);
	if (!mal)
		exit(98);
	return (mal);
}
