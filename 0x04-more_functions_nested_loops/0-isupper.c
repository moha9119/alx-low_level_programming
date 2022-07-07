#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <math.h>

/**
 * _isupper - check for uppercase
 *
 * Description: function for uppercase character
 * @c:uppercase character
 *
 * Return: 1 if c is uppercase
 * returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);

}
