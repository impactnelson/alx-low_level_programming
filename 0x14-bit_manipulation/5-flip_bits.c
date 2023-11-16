#include "main.h"

/**
 * flip_bits - This cnts num of bits to chnge one-another
 * @n: 1st num
 * @m: 2nd num
 * Return: Returns num of changeable bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}

