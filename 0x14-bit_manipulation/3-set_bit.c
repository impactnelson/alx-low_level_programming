#include "main.h"

/**
 * set_bit - This will set a given index bit to 1
 * @n: Points to the num to be changed
 * @index: Set bit at 1 on this index
 * Return: Returns -1 for failure, and 1 for success.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

