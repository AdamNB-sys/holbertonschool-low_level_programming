#include "lists.h"

/**
 * print_dlistint - prints elements from dlistint_t
 * @h: pointer to head of list
 *
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	if (!h)
		return (0);

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
