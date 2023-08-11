#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile- To read text form a file and print to standard ouput(STDOUT).
 * @filename: this is the text file we are reading
 * @letters: this is the number of letters we are going to be reading.
 *
 * Return: return n as the number of bytes read and displayed
 *        return 0 when a function fails or when the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffered;
	ssize_t df;
	ssize_t n;
	ssize_t fd;

	df = open(filename, O_RDONLY);
	if (df == -1)
		return (0);
	buffered = malloc(sizeof(char) * letters);
	fd = read(df, buffered, letters);
	n = write(STDOUT_FILENO, buffered, fd);

	free(buffered);
	close(df);
	return (n);
}

