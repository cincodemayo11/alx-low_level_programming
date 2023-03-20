#include <stdio.h>
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
	if (d)
	{
		if (!(d->name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		if (!(d->owner))
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
		printf("Age: %f\n", d->age);
	}
}
