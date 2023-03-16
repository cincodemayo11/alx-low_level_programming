#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatenates n bytes of str2 to str1
 *
 *@s1: the first string
 *@s2: the second string
 *@n: the number of bytes
 *
 *Return: pointer to the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *s;
	int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	s = malloc(len1 + len2 + 1);
	if (s == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	if (n > len2)
	{
		while (s2[j] != '\0')
		{
			s[len1 + j] = s2[j];
			j++;
		}
	}
	for (j = 0; j < n; j++)
	{
		s[len1 + j] = s2[j];
	}
	*(s + i + j) = '\0';

	return (s);
}
