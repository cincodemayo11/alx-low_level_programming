#include "main.h"

/**
 *reverse_array - reveerse the order of an array
 *
 *@a: the array
 *@n: the numbers of items in array
 *
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
