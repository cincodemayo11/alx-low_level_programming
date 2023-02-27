#include "main.h"

/**
 *swap_int - swaps two integers
 *
 *@a: and
 *@b: the two integers being swapped
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
