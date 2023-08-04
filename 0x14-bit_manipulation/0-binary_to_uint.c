#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint – changes a binary to an unint
 * @b: binary number string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int val_unit = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		val_unit = 2 * val_unit + (b[j] - '0');
	}

	return (val_unit);
}

