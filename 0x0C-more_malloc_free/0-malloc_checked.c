#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc and checks validity
 *
 *@b: the size of the memory
 *
 *Return: pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
