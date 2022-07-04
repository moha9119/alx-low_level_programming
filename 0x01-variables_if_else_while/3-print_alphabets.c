#include <stdio.h>

/**
 * main - Prints Alphabet
 *
 * Description: prints the alphabet in lowercase And uppercase
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char A = 'A';


	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
