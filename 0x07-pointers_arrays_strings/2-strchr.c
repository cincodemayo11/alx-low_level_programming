#include "main.h"

/**
 *_strchr - finds a char in a string
 *@s: the string
 *@c: the char being found
 *
 *Return: the position of char or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
{
		if (s[i] == c)
			return (s + i);

		else
			continue;
	}
	return ('\0');
}
