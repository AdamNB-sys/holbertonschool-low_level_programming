#include "lists.h"

/**
 * print_listint - prints all integers in a list of structs
 * @h: pointer to listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
