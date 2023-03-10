#include <stdio.h>
#include <stdlib.h>

/**
 *main - converts and multiplies the seconf third arguments
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%i\n", (i * j));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
