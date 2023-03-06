#include "main.h"

/**
 *_strstr - checks for s substring in a string
 *
 *@haystack: the string
 *@needle: the substring
 *
 *Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int count = 0;
	int comp = 0;

	for (; needle[i] != '\0'; i++)
	{
		count++;
	}

	if (*needle == '\0')
	{
		return ('\0');
	}

	for (; haystack[j] != '\0'; j++)
	{
		while (needle[k] == haystack[j] && needle[k] != '\0')
		{
			k++;
			j++;
			comp++;
		}
		if (needle[k] != '\0')
		{
			k = 0;
			comp = 0;
		}
	}
	if (comp == count)
		return (haystack + j - comp);
	else
		return ('\0');
}
