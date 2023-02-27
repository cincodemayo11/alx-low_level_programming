#include "main.h"

/**
 *_strcpy - copies a string
 *
 *@src: where we're copying from
 *@dest: where we're copying to
 *
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);

}
