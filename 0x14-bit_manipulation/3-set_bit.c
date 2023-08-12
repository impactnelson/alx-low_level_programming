#include "main.h"
#include "main.h"

/**
 * set_bit - This function sets a bit at an index (1).
 * @n: n points to the number to be changed.
 * @index: set the index of the bit to (1).
 * Return: Returns a  (1) for success, and a (-1) for failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
