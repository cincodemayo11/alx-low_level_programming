#ifndef _DOG_
#define _DOG_

/**
 *struct dog - Details about a good boy :)
 *
 *@name: name of the good boy
 *@age: his age
 *@owner: his owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;
#endif
