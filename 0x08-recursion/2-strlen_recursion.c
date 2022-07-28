#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - length of a string
 * @s: character to pint length
 *
 * Return: on sucess length
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
