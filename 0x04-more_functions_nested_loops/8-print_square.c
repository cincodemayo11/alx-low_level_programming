#include "main.h"

/**
 *print_square - prints a square
 *
 *@size: is the size of the sqaure
 *
 *Return: void
 */

void print_square(int size)
{
	int i = 1;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			j = 1;
			while(j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('#');
			_putchar('\n');
			i++;
		}
	}
}
