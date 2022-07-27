#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments
 * @argc: argument number
 * @argv: pointer array
 *
 * Return: number argument
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
