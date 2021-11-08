#include "lists.h"

/**
 * list_len - gives the number of elements in list_t
 * 
 * @h: pointer to first address
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
