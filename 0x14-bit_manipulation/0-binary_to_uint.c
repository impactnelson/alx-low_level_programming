#include "main.h"

/**
 * binary_to_uint - binary_to_uint will convert a binary number to an integer
 * @b: string containing the binary number
 * Return: returns the converted binary  number
 */


unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = 2 * val + (b[i] - '0');
	}

	return (val);
}

