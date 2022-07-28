#include <stdio.h>

/**
 * _pow_recursion - raise to power
 * @x: integer
 * @y: integer
 *
 * Return: on success pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

