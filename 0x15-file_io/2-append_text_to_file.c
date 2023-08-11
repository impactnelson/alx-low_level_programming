#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Adds or appends a text at a file's ending.
 * @filename: This is a pointer pointer the file's name.
 * @text_content: Str to add to the file's ending.
 *
 * Return: return -1 if the function fails or if the  filename is NULL.
 *         return -1 if the file doesn't exist and no user write permissions.
 *         Return 1 on success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_p = 0;
	int nn = 0;
	int lenn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenn = 0; text_content[lenn];)
			lenn++;
	}

	o_p = open(filename, O_WRONLY | O_APPEND);
	nn = write(o_p, text_content, lenn);

	if (o_p == -1 || nn == -1)
		return (-1);

	close(o_p);

	return (1);
}

