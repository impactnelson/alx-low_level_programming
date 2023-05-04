#include "main.h"

/**
 * clear_bit - To set the value of a given bit to be 0
 * @n: Pointing to the numb to be changed
 * @index: The index of the bit to be cleared
 *
 * Return: -1 is failure, 1 is success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

