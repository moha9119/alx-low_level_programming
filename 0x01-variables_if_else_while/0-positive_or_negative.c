#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints number
 *
 * Description: This program will assign a random number to the variable n
 *
 * Return: 0
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positif\n", n);
	else if (n < 0)
		printf("%d is negalitf\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
