#include <stdio.h>

/**
 *main - Entry point
 *
 *printf alphabet except q and e
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
