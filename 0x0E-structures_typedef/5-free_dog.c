#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_dog - free memory
 *
 * @d: string to free
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

