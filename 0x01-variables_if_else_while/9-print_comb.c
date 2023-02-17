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

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
