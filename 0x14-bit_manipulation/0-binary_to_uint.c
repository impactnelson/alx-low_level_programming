#include "main.h"

/**
 * binary_to_uint - This will  convert a binary number to an unsigned integer
 * @b: this str contains the binary numb
 *
 * Return: returns the converted number(binary).
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}

	return (value);
}

