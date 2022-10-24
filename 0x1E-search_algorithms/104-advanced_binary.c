#include "search_algos.h"

/**
 * binary_search - searches an array of integers using binary
 * search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to find in the array
 * Return: Index where value is located or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array)
        return (-1);
    return (binary_recursion(array, 0, size - 1, value));
}

/**
 * binary_recursion - driver for advanced binary search
 * @array: array to search
 * @left: left-most index of array
 * @right: right-most index of array
 * @value: the value to locate
 * Return: the index of found value or -1
 */
int binary_recursion(int *array, int left, int right, int value)
{
    int mid = left + (right - left) / 2;

    if (left == right && array[left] == value)
        return (left);

    printf("Searching in array: ");
    /** print_array(&array[left], (right - left + 1)); */
    if (left == right)
        return (-1);
    else if (array[mid] == value || array[mid] > value)
        return (binary_recursion(array, left, mid, value));

    return (binary_recursion(array, mid + 1, left, value));
}

/**
 * print_array - prints section of array being sorted
 * @array: array to print
 * @index: index to print from
 * @end: final node in array
 */
void print_array(int *array, int index, int end)
{
    for (; index <= end; ++index)
    {
        if (index < end)
        {
            printf("%d", array[index]);
            printf(", ");
        }
        else
        {
            printf("%d\n", array[index]);
        }
    }
}
