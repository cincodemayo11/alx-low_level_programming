#include <stdio.h>

/**
 *main - prints numbers in base 16
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c = '0';
	char h = 'a';

	for (; h <= 'f'; h++)
	{
		for (; c <= 9; c++)
		{
			putchar(c);
		}
		putchar(h);
	}
	putchar('\n');
	return (0);
}
