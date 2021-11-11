#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of listint_t
 * @head: pointer to head of listint_t
 * @n: node to add
 * Return: pointer to new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *scan;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode
}
