#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - Entry point
 *@argc: number of arguments
 *@argv: the numbers being calculated
 *
 *Return: the result
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *opr;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	opr = argv[2];
	num2 = atoi(argv[3]);

	result = (*get_op_func(opr))(num1, num2);

	printf("%d\n", result);

	return (0);
}
