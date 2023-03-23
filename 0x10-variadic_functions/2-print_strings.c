#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - prints strings with a separator
 *
 *@separator: the separator
 *@n: the number of things to print
 *
 *Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str =  va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
		}
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
