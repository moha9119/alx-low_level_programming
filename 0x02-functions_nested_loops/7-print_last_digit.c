#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - number
 *
 * Description: Prototype: int print_last_digit(int);
 * Returns the value of the last digit
 *@d: print last digit
 * Return: last digit
 * return 0
 */
int print_last_digit(int d)
{
	int i = 1;


	while (d > 0 || d <= 0)
	{
		d = -d;
		d = d % 10;
		return (d);
		_putchar(10);
		i++;
	
	}

	return (0);

}
