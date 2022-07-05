#include "main.h"
/**
 * prints
 *
 * Description: prints _putchar, followed by a new line.
 * You are allowed to use _putchar
 * You are not allowed to use global variables
 *
 * Return: 0
 */
int main(void)
{
	unsigned int i;
	char aff[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < sizeof(aff); i++)
	{
		_putchar(aff[i]);
	}
	_putchar('\n');

	return (0);
}

