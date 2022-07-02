#include <stdio.h>

/**
 * main - rint number
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	char num;


	for (num = 0; num < 10; num++)
	{
		putchar(num);
		putchar(',');
		putchar('\t');
	}
	putchar('\n');

	return (0);
}
