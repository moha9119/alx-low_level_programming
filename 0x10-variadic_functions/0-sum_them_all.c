#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - Sum of numbers
 *
 * @n:number to addition
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j = 0;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);

	for (; j < n; j++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);

	return (sum);
}
