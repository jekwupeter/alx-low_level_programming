#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: name of struct
 * @name: name of dog in new struct
 * @age: age of dog in new struct
 * @owner: name owner of dog in new struct
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
