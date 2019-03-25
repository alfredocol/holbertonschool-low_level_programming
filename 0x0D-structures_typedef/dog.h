#ifndef _DOG_H_
#define _DOG_H_

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - data structure for the canine variety
 * @name: string
 * @age: float
 * @owner: string
 */
struct dog
{
	char	*name;
	float	age;
	char	*owner;
};

/**
 * dog_t - type def for dog struct
 */
typedef struct dog dog_t;
int	_putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _D0G_H_ */
