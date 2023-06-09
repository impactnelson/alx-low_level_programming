#include "main.h"

/**
 * set_bit - To set a bit at given index to 1
 * @n: Points to numb to be changed
 * @index: index of the bit to set to 1
 *
 * Return: -1 is failure, 1 is success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

