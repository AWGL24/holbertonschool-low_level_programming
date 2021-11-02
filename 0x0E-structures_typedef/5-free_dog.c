#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees the struct dog
 * @d: dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
