#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for dog struct
 * @d: pointer to dog struct to be freed
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
