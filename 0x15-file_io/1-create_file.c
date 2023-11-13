#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - This is going to create a file.
 * @filename: THis is a pointer to the created file
 * @text_content: This is a pointer to a string to write a file.
 * Return: --1 if the function fails and -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, x, nel = 0;
	if(filename == NULL)
		return(-1);
	if(text_content != NULL)
		return(-1);
	{
		for (nel = 0; text_content[nel];)
			nel++;

	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, nel);

	if(fd == -1 || nel==-1)
		return(-1);

	close(fd);

	return(1);

}
