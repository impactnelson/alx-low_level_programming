#include "main.h"

/**
 * clear_bit - This sets the value (0) of the given bit.
 * @n: The pointer to num to be changed
 * @index: The clearing bit's indext
 * Return: -1 for failure, 1 for success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

