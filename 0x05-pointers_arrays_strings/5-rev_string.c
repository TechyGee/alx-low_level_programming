#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char swp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		swp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = swp;
	}
}
