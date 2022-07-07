#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <math.h>

/**
 * print_most_numbers - number
 *
 * Description:  prints the numbers, from 0 to 9
 * whitout 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
	}
	_putchar(10);
}



