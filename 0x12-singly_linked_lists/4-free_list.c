#include "lists.h"

/**
 * free_list - frees list
 * @head: pointer to list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *remove;

	while (head != NULL)
	{
		remove = head;
		head = head->next;
		free(remove->str);
		free(remove);
	}
}
