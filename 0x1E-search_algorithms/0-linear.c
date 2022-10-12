#include "search_algos.h"
/**
 * linear_search - searches arrays sequentially
 * @array: the incoming array to search
 * @size: size of the array
 * @value: the element to search for
 * Return: index of value found or -1 on failure
 */
 int linear_search(int *array, size_t size, int value)
{
    unsigned int i;

    if (array)
    {
        for (i = 0; i < size; i++)
        {
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
            if (array[i] == value)
                return (i);
        }
    }
    return (-1);
}
