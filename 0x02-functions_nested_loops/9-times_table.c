#include "main.h"

/**
 *times_table - prints the 9 multiplication table
 *
 *Return: void
 */

void times_table(void)
{
	int i = 0;
	int k;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(((j * i) % 10) + '0');
			}
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(((j * i) % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((j * i) / 10) + '0');
				_putchar(((j * i) % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
