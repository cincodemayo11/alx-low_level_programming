
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
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j <= n; j++)
	{
		dest[j] = src[j];
	}

	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
