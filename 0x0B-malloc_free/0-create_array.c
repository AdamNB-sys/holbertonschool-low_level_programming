#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - creates an array of chars, and initializes
 * with a specific char.
 * @size: unsigned int
 * @c: char
 * Return: Pointer to array, or NULL if it fails. Returns NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *point;
	unsigned int x;

	if (size > 0)
		point = malloc(sizeof(c) * size);
	if (point == NULL || size == 0)
		return (NULL);

	for (x = 0 ; x < size ; x++)
	{
		point[x] = c;
	}

	return (point);
}
