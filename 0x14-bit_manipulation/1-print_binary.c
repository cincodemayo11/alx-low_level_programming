#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *
 *@n: the decimal number
 *
 *Return: nada
 */

void print_binary(unsigned long int n)
{
	int binum, i, dig = 0;

	for (i = 31; i >= 0; i--)
	{
		binum = n >> i;

		if (binum & 1)
		{
			_putchar('1');
			dig = 1;
		}
		else if (dig)
		{
			_putchar('0');
		}
	}
	if (!dig)
	{
		_putchar('0');
	}
}
