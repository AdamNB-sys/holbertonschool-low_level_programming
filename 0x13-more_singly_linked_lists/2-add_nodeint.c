#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginnig of listint_t
 * @head: pointer to head of listint_t
 * @n: the node to add
 * Return: pointer to new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
