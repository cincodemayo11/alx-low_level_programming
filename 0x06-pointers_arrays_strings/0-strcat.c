#include "main.h"

/**
 *_strcat - appends src string to dest string
 *
 *@dest: the string being appended upon
 *@src: the appending string
 *
 *Return: dest
 */


char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; *(dest + i) != '\0'; i++)
	{
	}

	for (; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';

	return (dest);
}
