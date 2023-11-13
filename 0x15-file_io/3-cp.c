#include "main.h"
#include <stdlib.h>
//#define _POSIX_C_SOURCE 200809L
#define dprintf()
#include <stdio.h>

/**
 * create_buffer - This allocates 1024 b for buffer
 * @file: The file for whom buffer stores chars.
 * Return: Returns a pointer to the allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;
	buffer = malloc(sizeof(char) *1024);

	if(buffer == NULL)
	{
		DPRINTF(STDERR_FILENO,"Error: Cant write to %s\n", file);
		exit(99);
			
	}
	return(buffer);
}

/**
 * close_f - This closes the descriptors
 * @fd: The descriptor of the closed file
 */
void close_f(int fd)
{
	int d;
	d=close(fd);
	if(d==-1)
	{
		DPRINTF(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);

	}
}
/**
 * main- To copy the contents of a file to another 
 * @argc: Arguments count supplied
 * @argv: Pointers to the arguments.
 * Return: Returns 0 on success.
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;
	if(argc != 3)
	{
		DPRINTF(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);


	}
	buffer = create_buffer(argv[2]);
	from=open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to =open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do{
		if(from ==-1 || r==-1)
		{
			DPRINTF(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
			
		}
		
		r=read(from, buffer, 1024);
		to =open(argv[2], O_WRONLY | O_APPEND);

	}while(r>0);

	free(buffer);
	close_f(from);
	close_f(to);

	return(0);

}
