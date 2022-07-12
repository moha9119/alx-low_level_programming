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
	int a = 0;


	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	while (a >= 0)
	{
		*s = s[a];
		a--;
	}	
}
