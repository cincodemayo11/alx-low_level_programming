#include <stdlib.h>

/**
 *alloc_grid - allocates space for a 2d array
 *
 *@width: the size of the outer array (row size)
 *@height: size of the inner array (column size)
 *
 *Return: pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **c;
	int i = 0;
	int j = 0;

	if (width == 0 || height == 0)
		return (NULL);

	c = malloc((height) * (sizeof(int *)));

	for (; i < height; i++)
	{
		c[i] = malloc(width * sizeof(int));

		for (; j < width; j++)
			c[i][j] = 0;
	}
	return (c);
}
