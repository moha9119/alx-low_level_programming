#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator: string to be printed between the strings
 * @n: the number of strings passed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j = 0;
	char *chain = NULL;

	va_start(ap, n);
	for (; j < n; j++)
	{
		chain = va_arg(ap, char *);
		if (chain)
		{
			printf("%s", chain);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && j < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
