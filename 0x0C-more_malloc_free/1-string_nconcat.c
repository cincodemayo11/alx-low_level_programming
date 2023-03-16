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
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	j = len1 + n;

	s = malloc(j + 1);

	if (s == NULL)
	{
		return(NULL);
	}

	for (i = 0; i < j; i++)
	{
		if (i < len1)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[i - len1];
		}
	}
	s[i] = '\0';
	return (s);
}
