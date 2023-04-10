#include "main.h"

/**
 *read_textfile - function that reads a text file and prints it to stdout
 *
 *@filename: name of file
 *@letters: number of letters to be read and printed
 *
 *Return:  the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t opread;
	int opfile;

	if (filename  == 0)
	{
		return (0);
	}

	opfile = open(filename, O_RDONLY);

	if (opfile == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(opfile);
		return (0);
	}

	opread = read(opfile, buffer, letters);
	if (opread == -1)
	{
		free(buffer);
		close(opfile);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, opread) == -1)
	{
		free(buffer);
		close(opfile);
		return (0);
	}
	free(buffer);
	close(opfile);
	return (opread);
}
