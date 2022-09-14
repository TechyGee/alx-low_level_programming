#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The number to begin counting at.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_putchar("%d, ", n--);
		_putchar("%d\n", n);

	}

	else
	{
		while (n < 98)
			_putchar("%d, ", n++);
		_putchar("%\n", n);
	}
}
