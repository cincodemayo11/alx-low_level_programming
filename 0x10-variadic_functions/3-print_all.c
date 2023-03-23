#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - prints formatted strings
 *
 *@format: formatting of the string
 *
 *Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, comma = 0, j;
	char *str;
	const char args[] = "cifs";

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (args[j])
		{
			if (format[i] == args[j] && comma)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int)), comma = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), comma = 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), comma = 1;
			break;
		case 's':
			str = va_arg(list, char *), comma = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(list);
}
