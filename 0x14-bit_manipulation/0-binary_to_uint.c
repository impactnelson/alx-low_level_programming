#include "main.h"
#include <stdio.h>

/**
 *binary_to_uint – binary_to_unint changes a binary to an integer.
 *
 *@b: represents the binary number string
 *
 *Return: returns the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')
			return (0);
		value = 2 * value + (b[l] - '0');
	}

	return (value);
}

