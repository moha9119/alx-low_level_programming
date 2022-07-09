#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_line - draws straignt line
 * can only use _putchar function
 * function print \n if n is less than 0
 * @n: int digit
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar(95);
	}
	else if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar (10);
	}

}


