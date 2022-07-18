#include "main.h"
#include <stdio.h>

/**
 * _memset - memory
 *
 * @s: pointer type char
 * @b: constant char
 * @n: unsigned int;
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (i % 10 == 0)
		{
			_putchar(32);
		}
		s[i] = b;
	}

	return (s);
}
