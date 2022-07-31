#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - initialize char
 * @size: array size
 * @c: character to print
 *
 * Return: on succss point to the array
 * faills on nul
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i = 0;

	if (size == 0)
	{
		return (0);
	}

	b= malloc(sizeof(*b) * size);

	if (b == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		b[i] = c;
		i++;
	}

	return (b);
}
