#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - searches arrays for integers
 * @array: array
 * @size: size of array
 * @cmp: pointer to compare function
 *
 * Return: pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if ((*cmp)(array[x]) != 0)
			return (x);
	}
	return (-1);
}
