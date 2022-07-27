#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 * @argc: argument number
 * @argv: array pointer
 *
 * Return: programme name
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}

