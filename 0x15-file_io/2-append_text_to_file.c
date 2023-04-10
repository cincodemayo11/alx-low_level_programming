#include "main.h"

/**
 *qppend_text_to_file - a function that appends text at the end of a file
 *
 *@filename: the name of the file
 *@text_content: the NULL terminated string to add at the end of the file
 *
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openf;
	int strlen;
	int written;

	if (filename == 0)
	{
		return (-1);
	}

	openf = open(filename, O_WRONLY | O_APPEND);
	if (openf == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (strlen = 0; text_content[strlen] != '\0'; strlen++)
			;
		written = write(openf, text_content, strlen);
		if (written == -1)
		{
			close(openf);
			return (-1);
		}
	}
	close(openf);
	return (1);
}
