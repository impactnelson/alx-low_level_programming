#include "main.h"
#include <stdio.h>

/**
 * print_binary - this will print the binary number  that is same as a decimal.
 * @n: this is the number to printed in binary.
 * Return: returns _putchar 0 on success.
 */
void print_binary(unsigned long int n)
{
	int l;

	int counter = 0;

	unsigned long int _cur;

	for (l = 63; l >= 0; l--)
	{
		_cur = n >> l;

		if (_cur & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
