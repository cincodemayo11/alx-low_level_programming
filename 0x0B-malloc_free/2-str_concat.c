#include <stdlib.h>
/**
 *str_concat - concantenates s2 to s1.
 *
 *@s1: the receiving string
 *@s2: the giving string
 *
 *Return: pointer to the resulting concatenation
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	str = (char *)malloc((i * sizeof(s1[0]) + j * sizeof(s2[0]) + 1));

	if (str == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
	{
		str[l] = s1[l];
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
		str[l] = s2[k];
		l++;
	}

	str[i + j] = '\0';

	return (str);
}
