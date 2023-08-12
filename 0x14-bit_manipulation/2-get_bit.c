#include <stdio.h>
#include "main.h"

/**
 * get_bit - to return a bit's value at the decimal's index.
 * @n: n is for the number we are searching.
 * @index: This shows the bit's index.
 *
 * Return: Returns the bit's value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int _bit;

	if (index > 63)
		return (-1);

	_bit = (n >> index) & 1;

	return (_bit);
}

