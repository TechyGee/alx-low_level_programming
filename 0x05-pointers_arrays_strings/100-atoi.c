#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>


/**
 * _atoi - converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: the integer value of the converted string
 */

int _atoi(char *s)
{
	int sign = 1;

	do {
		if (*s == -1)
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	 } while (*s++);

	return (num * sign);

}
