#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
		return (0);
	}
	if (n < 0)
	{
		printf("%d is negative", n);
		return (0);
	}
	else
	{
		printf("%d is zero", n);
	}
	/* your code goes there */
	return (0);
}
