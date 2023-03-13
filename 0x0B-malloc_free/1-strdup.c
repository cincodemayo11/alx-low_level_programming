#include <stdlib.h>
/**
 *_strdup - copies a string to a newly allocated space
 *
 *@str: the string being copied
 *
 *Return: pointer to the new string
 */

char *_strdup(char *str)
{
	char *c;
	int size = 0;
	int  i = 0;
	int j = 0;

	for (; str[i] != '\0'; i++)
	{
		size++;
	}

	if (str[0] == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return ('\0');
	}

	c = malloc(size * sizeof(str[0]));

	if (c == NULL)
	{
		return (NULL);
	}

	for (; str[j] != '\0'; j++)
	{
		c[j] = str[j];
	}

	return (c);
}
