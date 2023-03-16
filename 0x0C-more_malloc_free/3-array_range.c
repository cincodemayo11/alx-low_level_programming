#include <stdlib.h>
#include "main.h"

/**
 *array_range - prints all ints between min and max in ascending order
 *
 *@min: the smallest digit in the array
 *@max: the largest digit in the array
 *
 *Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int digs;
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	digs = (max - min) + 1;

	arr = malloc(digs * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < digs; i++)
		arr[i] = min + i;

	return (arr);
}
