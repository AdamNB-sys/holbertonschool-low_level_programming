#include "lists.h"

/**
 * dlistint_len - finds number of elements of dlistint_t
 * @h: pointer to head of dlistint_t
 *
 * Return: nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
