#include "lists.h"

/**
 * add_node - adds a node to the beginning
 * @head: pointer to list
 * @str: input string
 * Return: pointer to new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
