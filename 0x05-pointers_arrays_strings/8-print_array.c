#include <stdio.h>
#include "main.h"

/**
 *print_array - prints the nth item in an array
 *
 *@a: the array
 *@n: the nth number
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n -1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
