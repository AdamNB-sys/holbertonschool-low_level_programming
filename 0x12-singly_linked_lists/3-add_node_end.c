#include "lists.h"

/**
 * add_node_end - adds a node to the end of list
 * @head: pointer to list
 * @str: input string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *scan;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);

	if (*head == NULL)
		*head = newNode;
	else
	{
		scan = *head;
		while (scan->next != NULL)
			scan = scan->next;
		scan->next = newNode;
	}
	return (newNode);
}
