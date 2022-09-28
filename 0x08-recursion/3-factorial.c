#include "main.h"

/**
 * factorial - retruns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: if n > 0 - the factorial of n.
 * if n < 0 - 1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	else
		return n * factorial(n - 1);
	
}

int main(void)
{
	int n = result;
	_putchar("%d", result);
	return (0);
}
