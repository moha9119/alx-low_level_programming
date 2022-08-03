#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: the number of ellement
 * @cmp: pointer to the function
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, a = -1;

	if (array && size && cmp)
	{
		if (size <= 0)
		{
			return (a);
		}

		for (; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				a = i;
				break;
			}
			if (cmp(array[i]) == -1)
			{
				return (a);
			}
		}
	}

	return (a);
}
