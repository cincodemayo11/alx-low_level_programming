#include <stdio.h>

/**
 *main - Entry point
 *
 *Write alphabet in putchar
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lo = 'a';
	char up = 'A';

	for (; up <= 'Z'; up++)
	{
		for (; lo <= 'z'; lo++)
		{
			putchar(lo);
		}
		putchar(up);
	}
	putchar('\n');
	return (0);
}
