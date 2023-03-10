#include "main.h"

/**
 *_puts - prints a given string
 *
 *@str: The given string
 *
 *Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		char c = *(str + i);

		_putchar(c);
	}
	_putchar('\n');
}
