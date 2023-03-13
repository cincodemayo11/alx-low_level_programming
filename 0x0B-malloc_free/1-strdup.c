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

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[i] != '\0'; i++)
	{
		size++;
	}

	c = (char *)malloc((size + 1) * sizeof(str[0]));

	if (c == NULL)
	{
		return (NULL);
	}

	for (; str[j] != '\0'; j++)
	{
		c[j] = str[j];
	}
	c[size] = '\0';

	return (c);
}
