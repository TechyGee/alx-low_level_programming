#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by an new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		_putchar('\n');
	}

	return (0);
}
