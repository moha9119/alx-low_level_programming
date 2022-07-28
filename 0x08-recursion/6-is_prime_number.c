#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prime number
 * @n: integer
 *
 * Return: on success 1
 */

int is_prime_number(int n)
{
	return (prime(n, 1));
}
/**
 * prime - check prime number
 * @n: integer
 * @i: integer
 *
 * Return: 1 for true false 0
 */

int prime(int n, int i)
{
	if ((i * i) == n)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else if ((i * i) > n)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
