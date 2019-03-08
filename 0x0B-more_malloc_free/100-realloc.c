#include "holberton.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to malloc'd memory
 * @old_size: size in bytes of ptr
 * @new_size: size in bytes of new malloc'd array
 *
 * Return: pointer to new malloc'd array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int	len, i;
	char	*arr, *temp;

	temp = (char *)ptr;
	/*If new_size == old_size do not do anything and return ptr*/
	if (new_size == old_size)
		return (ptr);
	/*
	* If new_size is equal to zero, and ptr is not NULL, then\
	* the call is equivalent to free(ptr). Return NULL
	*/
	if ((!old_size || !new_size) && *temp)
	{
		free(ptr);
		return (NULL);
	}
	/*If new_size > old_size, the “added” memory should not be initialized*/
	len = new_size > old_size ? old_size : new_size;
	arr = (char *)malloc(new_size);
	if (!arr)
	{
		/*?*/
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		arr[i] = temp[i];
	free(ptr);
	return ((void *)arr);
}
