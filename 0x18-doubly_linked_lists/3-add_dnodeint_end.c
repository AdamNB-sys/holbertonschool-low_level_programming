#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of dlistint_t
 * @head: pointer to head of dlistint_t
 * @n: node to add
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
	       return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);	
}
