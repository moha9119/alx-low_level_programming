#include <stdio.h>

/**
 * main - Prints Alphabet
 *
 * Description: prints the alphabet in lowercase whitout 'e','q'
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';


	while (a <= 'z')
	{
		if (a == ord (e) || a == ord (q))
		{
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
