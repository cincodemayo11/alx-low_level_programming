#include "main.h"
/**
 *_strlen_recursion - count number of char in a string
 *
 *@s: the string we're counting from
 *
 *Return: the number of chars
 */

int _strlen_recursion(char *s)
{
	char c = *s;

	if (c == '\0')
	{
		return (1);
	}
	return (1 + _strlen_recursion(s + 1));
}
