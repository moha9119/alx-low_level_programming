#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagonal - draws diagonal line
 * can only use _putchar function
 * function print \n if n is less than 0
 * @n: int digit
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int t;


	for (t = n; t > 0; t--)
	{
		_putchar('\t');
		_putchar(92);
		_putchar(10);
		if (t <= 0)
		{
			_putchar(10);
		}
	}
	_putchar(10);

}


