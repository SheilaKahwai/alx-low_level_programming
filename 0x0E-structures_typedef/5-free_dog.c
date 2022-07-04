#include "dog.h"
#include<stdlib.h>

/**
 * free_dog - frees the memory dynamically allocated to
 * struct dog
 * @d: pointer to struct dog to free
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
