#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <math.h>

/**
 * more_numbers - number
 *
 * Description:  prints the numbers, from 0 to 14
 * 10 times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int a, b;

	for  (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar(a / 10 + 48);
			}
			_putchar(a % 10 + 48);
		}
		_putchar(10);
	}
}



