#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - print array
 * @array: array to print
 * @size: size of array
 * @action: pointer to the function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size; i++)
	{
		if (array && size && action)
		{
			action(array[i]);
		}
	}
}
