#include "main.h"

/**
 * get_endianness - Will checks if machine is a 
 * small or big endian
 * Return: 1 for small and 0 for big.
 */
int get_endianness(void)
{
	unsigned int j = 1;

	char *c = (char *) &j;

	return (*c);
}

