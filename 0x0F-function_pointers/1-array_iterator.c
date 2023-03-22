#include <stddef.h>
#include "function_pointers.h"

/**
 *array_iterator - calls a print func over every array element
 *
 *@array: the array being iterated over
 *@size: size of the array
 *@action: the printing function
 *
 *Return: nada
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
