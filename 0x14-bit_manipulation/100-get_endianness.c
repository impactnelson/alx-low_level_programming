#include <stdio.h>
#include "main.h"

/**
 * get_endianness - This code will check if the endian machine is small or big.
 * Return: Will return 0 for big endian, or 1 for small endian.
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *c = (char *) &l;

	return (*c);
}

