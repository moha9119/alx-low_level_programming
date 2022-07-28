#include <stdio.h>

/**
 * factorial - factorial of a number
 * @n: print factorial of number
 *
 * Return: on success 1
 * an error return -1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
