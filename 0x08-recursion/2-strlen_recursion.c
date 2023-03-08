#include "main.h"

int _strlen_recursion(char *s)
{
	char c = *s;
	int count;

	if (c == '\0')
	{
	}
	else
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	return (count);
}
