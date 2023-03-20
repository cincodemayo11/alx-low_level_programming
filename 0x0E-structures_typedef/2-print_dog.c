#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints the dog'd details
 *
 *@d: struct containing dog's details
 *
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((d->name) == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %.1f\n", d->age);
		
		if ((d->owner) == NULL)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
