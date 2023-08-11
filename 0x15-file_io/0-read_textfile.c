#include <stdio.h>
#include "main.h"

/**
 * main - reads a file to standar output
 * return - returns (0): on success
 */

int main(void)
{

	FILE *nels = fopen("nelson.txt", "r");

	fprintf(nels, "%s", "Hello everyone\n");

	fclose(nels);

	return (0);



}
