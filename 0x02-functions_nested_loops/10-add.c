#include "main.h"

/**
 * add - addition two integer a and b
 *
 * Description: adds two integers and returns the result.
 * @a: is num integer
 * @b: is integer
 * Prototype: int add(int, int);
 *
 * Return: 0
 */
int add(int a, int b)
{
	int result;

	if ((a >= 0  && b >= 0) || (a < 0 && b < 0))
	{
		result = a + b;
		return (result);
	}
	_putchar(10);

	return (0);

}

