#include "lists.h"

/**
 * get_dnodeint_at_index - returns a certain node from dlistint_t
 * @head: the head of dlistint_t
 * @index: the index of the node we want
 * Return: address of said node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	while (count < index)
	{
		node = node->next;
		if (!node)
			return (NULL);
		count++;
	}
	return (node);
}
