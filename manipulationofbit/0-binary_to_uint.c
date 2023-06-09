#include "main.h"

/**
 * binary_to_uint - To convert  binary numb to an unsigned int
 * @b: The str that contains the binary numb
 *
 * Return: The number to be converted
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[j] - '0');
	}

	return (dec_val);
}

