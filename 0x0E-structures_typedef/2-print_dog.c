#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_dog - print element dog
 * @d: pointer to print
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(*d));
		return;
	}
	if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: nil\n", d->name, d->age);
	}
	if (d->name == NULL)
	{
		printf("Name: nil\nAge: %f\nOwner: %s\n", d->age, d->owner);
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
