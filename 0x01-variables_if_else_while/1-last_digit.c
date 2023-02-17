#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *generate rand num and compare its last digit  to 5
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;
        last_digit = (n % 10);

	printf("The last digit of %d", n);

	if (last_digit > 5)
	{
		printf("is greater than 5\n");
	}
	if (last_digit < 6 && last_digit != 0)
	{
		printf("is less than 6 and is not zero\n");
	}
	else
	{
		printf("is zero\n");
	}

	return (0);
}
