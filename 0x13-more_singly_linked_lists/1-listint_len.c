#include "lists.h"

/**
 * listint_len - returns the length of elements in listint_t
 * @h: pointer to struct
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
