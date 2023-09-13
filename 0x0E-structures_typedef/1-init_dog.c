#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes struct
 * @d: pointer
 * @name: name to
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
