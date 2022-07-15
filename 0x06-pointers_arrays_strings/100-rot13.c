#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes
 *
 * @sr: pointer type char
 *
 * Return: sr
 */

char *rot13(char *sr)
{
	int c = 0;
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(sr + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(sr + c) == alphabet[i])
			{
				*(sr + c) = rot13[i];
				break;
			}
		}
		c++;
	}

	return (sr);
}

