#include "lists.h"

/**
 * free_dlistint - frees dlistint_t
 * @head: head of dlistint_t
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *remove = head;

	while (remove)
	{
		remove = head->next;
		free(remove);
		head = remove;
	}
}
