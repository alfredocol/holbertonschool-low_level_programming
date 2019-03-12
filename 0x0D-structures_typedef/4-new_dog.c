#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - copies src to dest
 * @dest: string
 * @src: string
 *
 * Return: dest
 */
char	*_strcpy(char *dest, char *src)
{
	char	*p = dest;

	while ((*p++ = *src++))
		;
	return (dest);
}
/**
 * new_dog - creates new dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: pointer to struct
 */
dog_t	*new_dog(char *name, float age, char *owner)
{
	int	len1, len2, i, j;
	dog_t *d = malloc(sizeof(dog_t));

	/* Return NULL if malloc fails */
	if (!d)
		return (NULL);
	if (name)
	{
		for (len1 = 0; name[len1]; len1++)
			;
		d->name = malloc(len1 + 1);
		d->name =  d->name ? _strcpy(d->name, name) : NULL;
	}
	else
		d->name = NULL;
	if (owner)
	{
		for (len2 = 0; name[len2]; len2++)
			;
		d->owner = malloc(len2 + 1);
		d->owner =  d->owner ? _strcpy(d->owner, owner) : NULL;
	}
	else
		d->owner = NULL;
	d->age = age;
	return (d);
}
