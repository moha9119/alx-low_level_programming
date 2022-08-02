#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize type dog
 *
 * @d: pointer type dg
 * @name: string to print
 * @age: float to print
 * @owner: string to print
 *
 * Retunr: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
