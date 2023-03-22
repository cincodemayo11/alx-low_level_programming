#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *op_add - adds two numbers
 *@a: first number
 *@b: second number
 *
 *Return: the result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two numbers
*@a: first number
*@b: second number
*
*Return: the result
*/


int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *
 *@a: the first number
 *@b: the second number
 *
 *Return: the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two numbers
 *
 *@a: the first number
 *@b: the second number
 *
 *Return: the result
 */

int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 *op_mod - finds modulo of two numbers
 *
 *@a: first number
 *@b: second number
 *
 *Return: the result
 */

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
