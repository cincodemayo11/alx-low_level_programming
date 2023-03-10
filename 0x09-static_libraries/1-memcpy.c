#include "main.h"

/**
 *_memcpy - copies n bytes of src to dest
 *
 *@dest: the array being copied on
 *@src: the array being copied from
 *@n: the number of bytes being copied
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
