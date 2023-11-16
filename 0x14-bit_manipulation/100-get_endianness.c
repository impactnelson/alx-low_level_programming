#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Will checks if machine is a little or big endian
 * Return: Returns 1 for little and 0 for big.
 */

int get_endianness(void)
{
	unsigned int j = 1;

	char *c = (char *) &j;

	return (*c);
}
