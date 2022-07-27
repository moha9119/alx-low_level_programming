#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication
 * @argc: argument number
 * @argv: array pointer
 *
 * Return: success value
 * On Error print error, return -1
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	exit(EXIT_SUCCESS);
}
