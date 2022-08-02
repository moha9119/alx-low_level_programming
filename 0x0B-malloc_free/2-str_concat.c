#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * str_concat - concatenate two strings
 * @s1: string  to print
 * @s2: string to print
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *a = NULL;
	int i, j, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	if (a == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			a[c] = s1[c];
		else
			a[c] = s2[d++];

	}
	return (a);
}