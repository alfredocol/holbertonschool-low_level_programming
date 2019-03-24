#include "dog.h"
/**
 * init_dog - initialized a variable of type struct
 * @d: struct
 * @name: str *
 * @age: float, a very specific age
 * @owner: str *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
