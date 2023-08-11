#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * create_file - This is to create a unix  file.
 * @filename: Filename is a pointer points the name of the created file.
 * @text_content: This  pointer points a str to write to thefile.
 * Return: return -1 if the function fails and 1 for success.
 */

int create_file(const char *filename, char *text_content)
{
	int dfine = 0;
	int dm = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	dfine = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	dm = write(dfine, text_content, len);

	if (dfine == -1 || dm  == -1)
		return (-1);

	close(dfine);

	return (1);
}

