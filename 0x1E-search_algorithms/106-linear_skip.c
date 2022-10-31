#include "search_algos.h"

/**
 * linear_skip - binary search with fast pass
 * @list: the list to search
 * @value: the value to find in the list
 * Return: node at which the value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *temp = NULL;

    if (list == NULL)
        return (NULL);

    temp = list->express;
    while (temp != NULL)
    {
        printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
        if (temp->n >= value)
        {
            printf("Value found between indexes [%lu] and [%lu]\n", list->index, temp->index);
            break;
        }
        list = temp;
        temp = temp->express;
    }

    if (temp == NULL)
    {
        temp = list;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        printf("Value found between indexes [%lu] and [%lu]\n", list->index, temp->index);
    }

    while (list != NULL && list->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        if (list->n == value)
            return (list);
        list = list->next;
    }

    return (NULL);
}
