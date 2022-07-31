#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - allocated space in memory
 * @str: pointer to the duplicated
 *
 * Return: On success string
 * insufficent memory Null
 */

char *_strdup(char *str)
{
	char *b;
	int c, i = 0;


	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[i] != '\0'; i++)
	{
		;
	}

	b = malloc((sizeof(*str) * i));
	if (b == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < i; c++)
	{
		*(b + c) = *(str + c);
	}
	b[c] = '\0';
	return (b);
}
