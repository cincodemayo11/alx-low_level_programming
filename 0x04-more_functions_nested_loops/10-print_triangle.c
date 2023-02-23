#include "main.h"

/**
 *print_triangle - prints an upside down triangle
 *
 *@size: size of the reiangle
 *
 *Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;


	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - i); j++)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
