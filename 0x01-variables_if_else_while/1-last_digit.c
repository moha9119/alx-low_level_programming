#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and greater than 5<_n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, last);


	return (0);

}
