#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_rev_recursion - string reverse
 * @s: the Character to print
 *
 * Return: on success 1
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
