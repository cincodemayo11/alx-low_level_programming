#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - creates a new dog
 *
 *@name: name of the new dog
 *@age: age of the new dog
 *@owner: owner of the new dog
 *
 *Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int ownerlen;
	int namelen;
	int i;

	new = malloc(sizeof(*new));
	if (new == NULL || name == NULL || owner == NULL)
	{
		free(new);
		return (NULL);
	}
	for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++)
		{
		}
	for (namelen = 0; name[namelen] != '\0'; namelen++)
	{
	}
	new->name = malloc(namelen + 1);
	new->owner = malloc(ownerlen + 1);
	if (!(new->name) || !(new->owner))
	{
		free(new);
		free(new->name);
		free(new->owner);
	}
	new->age = age;
	for (i = 0; i < namelen; i++)
	{
		new->name[i] = name[i];
	}
	new->name[i] = '\0';
	for (i = 0; i < ownerlen; i++)
	{
		new->owner[i] = owner[i];
	}
	new->owner[i] = '\0';
	return (new);
}
