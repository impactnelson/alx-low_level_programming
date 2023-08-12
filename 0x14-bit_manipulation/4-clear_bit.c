#include "main.h"
#include <stdio.h>

/**
 * clear_bit -clear will set a bit's value to (0).
 * @n: This is the pointer to the targeted numb.
 * @index: This indexes the bit to be cleared.
 *
 * Return: returns (-1) if it fails, or retrurns (1) if it succeeds.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

