#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: struct
 *
 */
void	print_dog(struct dog *d)
{
	/* If d is NULL print nothing. */
	if (!d)
		return;
	/* If an element of d is NULL, print (nil) instead of this element. */
	/*
	* too long :..(
	* printf("%s\n%f\n%s\n", (d->name ? d->name : "nil"),\
	* d->age, (d->owner ? d->owner : "nil"));
	*/
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
