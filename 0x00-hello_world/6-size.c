#include <stdio.h>

/**
  * main- Entry point
  *
  *Description: prints the size of various types on this computer
  *
  *Return: ALways 0 (Success)
  */

int main(void)
{
	char charType;
	int intType;
	long longintType;
	long long longlongintType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));

	return (0);
}
