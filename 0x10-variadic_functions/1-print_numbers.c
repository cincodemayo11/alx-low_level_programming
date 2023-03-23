#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - prints numbers and a separator
 *
 *@separator: a string to separate the numbers
 *@n: number of numbers
 *
 *Return: nada
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator)
	{
		for (i = 1; i <= n; i++)
		{
			if (i != n)
			{
				printf("%d%s", va_arg(list, int), separator);
			}
			else
			{
				printf("%d\n", va_arg(list, int));
			}
		}
	}
}
