#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts_recursion - prints string
 * @s: The caracter to print
 *
 * Return: on success 1
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
