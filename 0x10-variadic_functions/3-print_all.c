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
	char alp;
	int alpint;
	int dig;
	float dec;
	double decdub;
	char *str;
	va_list list;
	int comma = 0;
	const char *ptr;

	ptr = format;
	va_start(list, format);
	while (*ptr)
	{
		if (*ptr == 'c')
		{
			alpint = va_arg(list, int);
			alp = (char)alpint;
			printf("%c", alp);
			comma = 1;
		}
		if (*ptr == 'i')
		{
			dig = va_arg(list, int);
			printf("%d", dig);
			comma = 1;
		}
		if (*ptr == 'f')
		{
			decdub = va_arg(list, double);
			dec = (float)decdub;
			printf("%f", dec);
			comma = 1;
		}
		if (*ptr == 's')
		{
			str = va_arg(list, char *);
			if (str == NULL)
			{
				printf("(nil)");
				comma = 1;
			}
			else
			{
				printf("%s", str);
				comma = 1;
			}
		}
		if (*(ptr + 1) && comma)
		{
			printf(", ");
			comma = 0;
		}

		ptr++;
	}
	printf("\n");
	va_end(list);
}
