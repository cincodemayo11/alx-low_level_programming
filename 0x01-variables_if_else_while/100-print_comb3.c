#include <stdio.h>

/**
 *main - prints unique two digit combos
 *
 *Returns: Always 0 (Success)
 */

int main(void)
{
	char num1 = '0';
	char num2;

	for (; num1 < '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == '8' && num2 == '9')
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
}
