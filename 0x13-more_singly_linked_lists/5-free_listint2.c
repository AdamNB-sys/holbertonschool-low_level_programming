#include "lists.h"

/**
 * free_listint2 - frees listint_t
 * @head: pointer to listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *copy = *head, *temp;

	while (copy)
	{
		temp = copy;
		copy = copy->next;
		free(temp);
	}
	*head = NULL;
}
