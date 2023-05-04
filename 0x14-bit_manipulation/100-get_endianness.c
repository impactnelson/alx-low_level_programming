#include "main.h"

/**
 * get_endianness - To check if a machine is a little or a big endian
 * Return: 1 will be little, 0 will be big
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}

