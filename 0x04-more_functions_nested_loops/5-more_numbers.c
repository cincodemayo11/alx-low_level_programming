#include "main.h"

/**
 *more_numbers - prints 0 through 14 ten times
 *
 *Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
