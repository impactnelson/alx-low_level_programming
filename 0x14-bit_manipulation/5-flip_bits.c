#include "main.h"

/**
 * flip_bits - To count the numb of bits to be changed
 * to get from one numb to the another
 * @n: First numb
 * @m: Second number
 *
 * Return: Number of bits to be changed
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

