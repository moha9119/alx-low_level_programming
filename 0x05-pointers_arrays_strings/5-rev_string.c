#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse string
 *
 * @s: pointer string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int a = 0, max, half;
	char first, last;

	while (s[a] != '\0')
	{
		a++;
	}
	max = a - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
	_putchar(10);
}
