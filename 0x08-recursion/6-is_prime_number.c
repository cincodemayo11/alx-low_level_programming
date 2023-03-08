#include "main.h"

/**
 *is_prime_number - checks whether a number is a prime number
 *
 *@n: the  number being checked
 *@i: I don't why betty is asking for this
 *
 *Return: yes (1) or no (0)
 */

int findpr(int n, int i);

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0 || n == 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0 && n != 2)
		return (0);
	return (findpr(n, 3));
}

/**
 *findpr - finds the prime number by calculating it's square root
 *
 *@n: the number being checked
 *@i: where we will start checking
 *
 *Return: yes (1) or no (0)
 */

int findpr(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}

	return (findpr(n, i + 2));
}
