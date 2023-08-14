#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Gives the amount of  1024 bytes for a buffer.
 * @file: Name of the buffer's file storage.
 *
 * Return: Reurns The Newly-allocated buffer pointer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - This will Close the file descriptors.
 * @fd: File descriptor that will be closed.
 */
void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Will copy file's content to another file.
 * @argc: the supplied number of arguments to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Returns  0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *  If file_from does not exist or cannot be read - exit code 98.
 *  If file_to cannot be created or written to - exit code 99.
 *  If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, f, v;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	f = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || f == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		v = write(to, buffer, f);
		if (to == -1 || v == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		f = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (f > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

