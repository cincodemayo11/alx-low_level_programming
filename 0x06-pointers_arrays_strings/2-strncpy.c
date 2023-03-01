#include "main.h"

/**
 *_strncpy - copies n bytes from src to dest
 *
 *@dest: the destination string
 *@src: the source string
 *@n: the number of bytes
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(src + i) = *(dest + i)
			i++;
	}
	while (i < n)
	{
		*(src + i) = '\0';
	}
	return (dest);
}
