#include "main.h"

/**
 * print_alphabet -Entry point
 *
 *works with main.c to putchar the alphabet
 *
 * Return: Always 0 (Success.)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
