#include <stdio.h>
/**
 *main - print all single digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
