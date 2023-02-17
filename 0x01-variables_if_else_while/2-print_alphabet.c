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
	char alp = 'a';
	for(; alp < 'z'; alp++)
	{
		putchar(alp);
	}
	return (0);
}
