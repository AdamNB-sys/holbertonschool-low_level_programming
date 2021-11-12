#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *copy = head, *temp;

	while (copy)
	{
		temp = copy;
		copy = copy->next;
		free(temp);
	}
}
