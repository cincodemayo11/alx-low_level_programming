#include <stdio.h>

/**
 *main - prints out the first commandline argument
 *
 *@argc: thw number of arguments
 *@argv: the actual arguments
 *
 *Return: 0 (Always success.)
 */

int main(int argc __attribute__((unused)), char *argv[])
{

		printf("%s\n", argv[0]);

	return (0);
}
