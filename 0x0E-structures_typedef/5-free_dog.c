#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - lets the dogs out
 * @d: pointer to struct dog_t
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
