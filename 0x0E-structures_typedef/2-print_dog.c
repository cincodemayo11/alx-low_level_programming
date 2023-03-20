#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *print_dog - prints the dog struct
 *
 *@d: struct containing dog's details
 *
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (d ==NULL)
		;
	else
	{
		if (!(d->name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (!(d->owner))
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
