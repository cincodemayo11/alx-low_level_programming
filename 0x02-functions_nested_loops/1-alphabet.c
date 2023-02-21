#include "main.h"

/**
 * main - check the code
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
