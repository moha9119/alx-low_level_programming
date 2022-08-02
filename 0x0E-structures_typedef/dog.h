#ifndef DOG_H
#define DOG_H

/**
 * struct dog - description dog
 * @name: string to print
 * @age: float to print
 * @owner: sting to print
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
