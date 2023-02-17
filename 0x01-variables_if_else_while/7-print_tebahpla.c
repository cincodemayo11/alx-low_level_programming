#include <stdio.h>

/**
 *main - Entry point
 *
 *prints alphabet backwards using putchar
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'z';

	for (; c <= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
