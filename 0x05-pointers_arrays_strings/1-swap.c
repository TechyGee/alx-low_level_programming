#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swap the value of two integers.
 * @a: first integer to be swapped.
 * @b: second integer to be swapped.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;

	*b = swp;

}
