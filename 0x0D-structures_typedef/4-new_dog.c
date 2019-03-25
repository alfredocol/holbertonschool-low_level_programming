#include "dog.h"

/**
 * _strdup - copies src to dest
 * @s: string to dupe
 *
 * Return: pointer to duplicated str
 */
char	*_strdup(char *s)
{
	char	*d = NULL;
	int	l = 0, i;

	if (!s)
		return (NULL);
	while (s[l])
		l++;
	d = malloc(sizeof(char) * l + 1);
	if (!d)
		return (NULL);
	for (i = 0; i < l; i++)
		d[i] = s[i];
	d[i + 1] = 0;
	return (d);
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
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);
	if (name)
	{
		d->name = _strdup(name);
		if (!d->name)
			return (free(d), NULL);
	}
	if (owner)
	{
		d->owner = _strdup(owner);
		if (!d->owner)
		{
			if (d->name)
				free(d->name);
			free(d);
			return (NULL);
		}
	}
	d->age = age;
	return (d);
}
