#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_dog - print element dog
 * @d= pointer to print
 *
 * Return: element dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		return;
	}
	if (d->name == NULL)
	{
		printf("Name : nil\nAge: %f\nOwner: %s\n", d->age, d->owner);
	}
	if (d != NULL)
	{
		 printf("Name : %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
	}
	else
	{
		printf("\n");
	}
}
