#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of dlistint_t
 * @head: pointer to head of list
 * @n: the new node to add
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;
	return (newNode);
}
