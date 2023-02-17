#include <stdio.h>

/**
 *main - prints unique two digit combos
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 48;
	int num2;

	for (; num1 < 57; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == 56 && num2 == 57)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
