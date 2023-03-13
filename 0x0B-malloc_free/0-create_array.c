#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *i;
	int j;

	i = (char*) malloc(sizeof(char) * size);

	if (size == 0)
	{
		return('\0');
	}
	else
		for (j = 0; i[j] != '\0'; j++)
		{
			i[j] = c;
		}

	return (i);
}
