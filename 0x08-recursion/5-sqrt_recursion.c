#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - natural square
 * @n: print square
 *
 * Return: square
 */

int _sqrt_recursion(int n)
{
	return (_squart(n, 1));
}

/**
 * _squart - verify numeber
 * @n: integer
 * @i: integer
 *
 * Return: on success i.
 */

int _squart(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	return (_squart(n, i + 1));
}
