#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers with malloc
 * @min: initial values
 * @max: end values
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *array;
	int x = 0;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[x] = min;
		min++;
		x++;
	}
	return (array);
}
