#include <stdio.h>

/**
 * main - prints number
 *
 * Description: rints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(48 + 10);
	putchar('\n');


	return (0);
}
