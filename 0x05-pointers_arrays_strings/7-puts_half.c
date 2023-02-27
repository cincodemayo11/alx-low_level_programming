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

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}

	i--;

	if ((i % 2) == 0)
	{
		i = (i / 2);
	}
	else
	{
		i = ((i + 1) / 2);
	}

	while ((str[i]) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
