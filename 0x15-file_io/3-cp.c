#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * create_buffer - This will  allocates about (1024) bytes for a buffered.
 * @file: Buffers stores the name of the file here.
 *
 * Return: return a pointer for the new allocated buffer.
 */
char *create_buffer(char *file);
void close_file(int df);

char *create_buffer(char *file)
{
	char *buffered;

	buffered = malloc(sizeof(char) * 1024);

	if (buffered == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffered);
}

/**
 * close_file - This wil close all the file descriptors.
 * @df: df is the file descriptor that is to be closed.
 */
void close_file(int df)
{
	int n;

	n = close(df);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close df %d\n", df);
		exit(100);
	}
}

/**
 * main - To copy the contents of a file to another file.
 * @argc: num of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 * Return: Return 0 for success.
 * Description: If the argument count is incorrect - exit code 97.
 * Exit code for  file_from if it does not exist or cannot be read is  98.
 * Exit code for  file_to if it cannot be created or written is 99.
 * Exit code for file_to or file_from if they  cannot be closed is  100.
 */
int main(int argc, char *argv[])
{
	int nn, xy, from, to;
	char *buffered;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffered = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	nn = read(from, buffered, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || nn == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffered);
			exit(98);
		}

		xy = write(to, buffered, nn);
		if (to == -1 || xy == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffered);
			exit(99);
		}

		nn = read(from, buffered, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (nn > 0);

	free(buffered);
	close_file(from);
	close_file(to);

	return (0);
}

