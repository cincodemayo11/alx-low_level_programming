#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *
 *Putchars the alphabet ten times followed by a newline
 *
 *Return: Always 0 (Success.)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}
