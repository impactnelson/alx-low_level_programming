#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Adds text at the file's tail.
 * @filename: Pointer to the file's name
 * @text_content: What to be added to the file's tail.
 * Return: --1 If file name is NULL or if function fails.
 * -1 if otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int m, x, nel = 0;
	if(filename==NULL)
		return(-1);
	if(text_content !=NULL)
	{
		for(nel=0; text_content[nel];)
			nel++;

	}

	m = open(filename, O_WRONLY | O_APPEND);
	x = write(m, text_content, nel);
	
	if(m==-1 || x==-1)
		return(-1);

	close(m);
	return(1);

}
