#include <stdlib.h>
/**
 *create_array - craetes a char array and initializes it with char c
 *
 *@size: the size of the array
 *@c: the char we're initializing with
 *
 *Return: A pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	i = malloc(sizeof(char) * size);

	if (i == NULL)
	{
		return (NULL);
	}
	else
		for (j = 0; j < size; j++)
		{
			i[j] = c;
		}

	return (i);
}
