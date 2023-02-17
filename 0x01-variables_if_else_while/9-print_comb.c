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
		if (i != 57)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(i);
		}
	}
	return (0);
}
