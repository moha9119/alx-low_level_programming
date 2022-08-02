#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - copy name and owner
 * @name: string to print
 * @age: float to print
 * @owner: string to print
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d =  malloc(sizeof(*d));
	if (d == NULL)
	{
		return (0);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
