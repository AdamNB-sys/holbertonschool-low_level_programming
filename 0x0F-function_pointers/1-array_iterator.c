#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: pointer to array
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		(*action)(array[x]);
	}
}
