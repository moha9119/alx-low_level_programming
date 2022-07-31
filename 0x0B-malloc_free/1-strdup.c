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

	b = malloc((sizeof(*str) * i));

	while (str[i] != '\0')
	{
		i++;
	}

	for (c = 0; c < i; c++)
	{
		if (b != NULL)
		{
			*(b + c) = *(str + c);
		}
		else
		{
			return (NULL);
		}
	}
	b[c] = '\0';
	return (b);
}
