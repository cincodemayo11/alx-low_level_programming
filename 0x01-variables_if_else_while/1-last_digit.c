#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0(Always success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The last digit of %d is %d and", n, (n % 10));
	if (n % 10 > 5)
	{
		printf("is greater than 5\n");
	}
	if (n % 10 < 6 && n != 0)
	{
		printf("is less than 6 and not 0\n");
	}
	else
	{
		printf("is 0\n");
	}
	return (0);
}
