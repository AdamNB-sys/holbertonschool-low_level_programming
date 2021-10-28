#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to space in memory
 * Return: Pointer to duplicated string. Null if insufficient memory,
 * or if str = NULL.
 */
char *_strdup(char *str)
{
	char *cpy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
	{
		count++;
	}

	cpy = malloc(sizeof(char) * count + 1);
	if (cpy == NULL)
		return (NULL);

	for (count = 0 ; str[count] != '\0' ; count++)
	{
		cpy[count] = str[count];
	}
	cpy[count] = '\0';
	return (cpy);
}
/**
 * new_dog - creates a new dog
 * @name: dogname
 * @age: dogage
 * @owner: dogowner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = _strdup(name);

	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->age = age;
	newdog->owner = _strdup(owner);

	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	return (newdog);
}
