#include "holberton.h"

/**
 * _calloc - returns malloc'd array with elements set to zero
 * @nmemb: elements to malloc
 * @size: byte size of element
 *
 * Return: void pointer to malloc'd memory
 */
void	*_calloc(unsigned int nmemb, unsigned int size)
{
	char		*arr;
	unsigned int	i, len;

	/*If nmemb or size is 0, then _calloc returns NULL*/
	if (!size || !nmemb)
		return (NULL);
	len = nmemb * size;
	arr = (void *)malloc(len);
	/*If malloc fails, then _calloc returns NULL*/
	if (!arr)
		return (NULL);
	/*The memory is set to zero*/
	for (i = 0; i < len; i++)
		arr[i] = 0;
	return ((void *)arr);
}
