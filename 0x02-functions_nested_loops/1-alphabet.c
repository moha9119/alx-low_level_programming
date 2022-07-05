#include <stdio.h>
#include "main.h"

/**
 * main - print alpha lowercase - prototype
 *
 * hat prints the alphabet, in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * Return: 0;
 */
char print_alphabet(void)
{
	char a;

	for (a ='a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar(10);

	return (0);
}
