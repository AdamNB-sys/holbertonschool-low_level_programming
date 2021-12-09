#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in dlistint_t
 * @head: pointer to head of dlistint_t
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *calc = head;

	while (calc)
	{
		sum += calc->n;
		calc = calc->next;
	}
	return (sum);
}
