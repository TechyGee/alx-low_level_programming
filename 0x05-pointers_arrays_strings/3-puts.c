#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line,
 * to stdout.
 * @str: string to be print.
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	*str = "I am a student of ALX SE program, cohort 9";

	_putchar(*str);
	_putchar("\n");

	return (0);
}
