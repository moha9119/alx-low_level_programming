#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print number
 *
 * @separator: string to be printed between numbers
 * @n: number integers passed between numbers
 *
 * Return: nulbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j = 0;
	unsigned int num = 0;

	va_start(ap, n);

	for (; j < n; j++)
	{
		num = va_arg(ap, unsigned int);
		printf("%d", num);

		if (separator == NULL)
		{
			continue;
		}
		if (separator && j < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");

}
