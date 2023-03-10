#include <stdio.h>
/**
 *main - prints all arguments followed by a newline
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 *Return: 0 (Always success.)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
