#include "main.h"

/**
 *_strspn - checks the number of bytes in the initial
 *segment of s which consist
 * only of bytes from accept
 *
 *@s: the string being checked
 *@accept: the bytes being compared
 *
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int k = 0;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}

	}
	return (k);
}
