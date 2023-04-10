#include "main.h"

/**
 *create_file - function that creates a file
 *
 *@filename: the name of the file to create
 *@text_content: a NULL terminated string to write to the file
 *
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int openf, strlen, written = 0;

	if (!filename)
	{
		return (-1);
	}

	openf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (openf == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (strlen = 0; text_content[strlen] != '\0'; strlen++)
		;

	written = write(openf, text_content, strlen);

	if (written == -1)
	{
		close(openf);
		return (-1);
	}
	close(openf);
	return (1);
}