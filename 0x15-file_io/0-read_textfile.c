#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * read_textfile- The read_textfile is the Read text file print to STDOUT.
 * @filename: The text file to be read.
 * @letters: This is the number of letters being read
 * Return: Returns a 0 when function fails or filename is NULL 
 * w- when the it's Actual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{ 
	char *buf;
	size_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) *letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return(w);

}

