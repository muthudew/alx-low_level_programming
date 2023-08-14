#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the new dog struct whoose variable is to be
 * initialised
 *
 * @d: pointer to the struct of the new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
