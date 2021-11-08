#include "lists.h"

/**
 * print_list - prints elements of list_t list
 *
 * @h: pointer to first address
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}
