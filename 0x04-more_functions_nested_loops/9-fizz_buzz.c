#include <stdio.h>

/**
 * main - multiple Fizz-Buzz
 * prints the numbers from 1 to 100
 * multiples of three print Fizz
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("Fizz Buzz");
			printf(" ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (n % 3 == 0)
		{
			printf("Fiz");
			printf(" ");
		}
		else
		{
			printf("%d", n);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}



