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
	int j = 0;

	for (; *(dest + i) != '\0'; i++)
	{
	}

	for (; j < n && *(src + j) != '\0'; j++, i++)
	{
		*(dest + j) = *(src + j);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}

		return (dest);
}
