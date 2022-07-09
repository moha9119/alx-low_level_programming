#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_square - size of the square
 * can only use _putchar function
 * function print \n if n is less than 0
 * @size: int digit
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int a, b;

	for (a = size; a > 0; a--)
	{
		for (b = size; b > 0; b--)
		{
			_putchar(35);
		}
		_putchar(10);
		if ( a <= 0 && b <= 0)
		{
			_putchar(10);
		}
	}
	_putchar(10);

}
