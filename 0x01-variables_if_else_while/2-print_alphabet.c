#include <stdio.h>

/**
 *main - Entry point
 *
 *print alphabet using putchar
 *
 *Return: 0 (Always success)
 **/

int main(void)
{
	for (char alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
