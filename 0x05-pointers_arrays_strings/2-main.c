#include "main.h"
#include <stdio.h>

/**
 * main - chaeck code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *str;
	int len;


	str = "My first strlen!";
	len = _strlen(str);
	printf("n=%d\n", len);
	return (0);
}
