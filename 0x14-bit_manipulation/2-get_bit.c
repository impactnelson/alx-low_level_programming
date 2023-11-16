#include "main.h"
#include <stdio.h>
/**
 * get_bit - The value of a bit at an index in a deci num
 * @n: The number to search for
 * @index: The bit's index
 * Return: Returns the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}

