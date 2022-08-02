#ifndef DOG_H
#define DOG_H

/**
 * struct dog - description dog
 * @name: string to print
 * @age: float to print
 * @owner: sting to print
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
