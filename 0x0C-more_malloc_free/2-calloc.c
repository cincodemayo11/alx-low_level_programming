#include <stdlib.h>
#include "main.h"

/**
 *_calloc - allocate memory for n numbers of elements in an array of a size
 *
 *@nmemb: number of array elements
 *
 *@size: size of each element in bytes
 *
 *Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		str[i] = 0;
	}

	return (str);
}
