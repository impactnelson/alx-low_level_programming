#include <unistd.h>

/**
 * _putchar - prints  the char c to standard output
 * @c: The character to print
 *
 * Return: 1 for success
 * If error return -1, and errno is appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
