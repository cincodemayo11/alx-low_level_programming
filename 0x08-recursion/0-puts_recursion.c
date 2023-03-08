#include "main.h"

/**
 *_puts_recursion - prints strings
 *
 *@s: the string being printed
 *
 *Return: void
*/

void _puts_recursion(char *s)
{
	char c = *s;

	if (c != '\0')
	{
		_putchar(c);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
