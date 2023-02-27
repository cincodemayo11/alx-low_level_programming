#include "main.h"

/**
 *puts_half - prints the 2nd half of a string
 *
 *@str: The string in question
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		count++;
	}

	i--;

	if ((i % 2) == 0)
	{
		i = (i / 2);
	}
	else
	{
		i = ((i - 1) / 2);
	}

	for (i++; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
