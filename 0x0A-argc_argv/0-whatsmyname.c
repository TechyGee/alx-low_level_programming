#include <stdio.h>

/**
 * main - Prints the program name, followed by new line.
 * @argc: The number of argunments supplied to the program.
 * @argv: An array of Pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
