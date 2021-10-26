#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: amount of memory allocated
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int x; /* counter */

	/* checks for value of elements */
	if (nmemb == 0 || size == 0)
		return (NULL); /* returns null if null */

	/* allocate array, size based on nmemb and size */
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL); /* returns null if array is empty */

	for (x = 0 ; x < (nmemb * size); x++)
		arr[x] = 0;
	return ((void *)arr);
}
