#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: dogname
 * @age: dogage
 * @owner: dogowner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *newdog = dog_t;

	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->owner = owner;
	newdog->age = age;

	return (newdog);
}
