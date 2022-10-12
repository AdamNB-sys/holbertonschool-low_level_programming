#include "search_algos.h"

/**
 * binary_search - searches an array of integers using binary 
 * search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to find in the array
 * Return: Index where value is located or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
    int left = 0, mid, i;
    int right = size - 1;

    if (array)
    {
        while (left <= right)
        {
            printf("Searching in array: ");
            for (i = left; i <= right; i++)
            {
                if (i == right)
                    printf("%d\n", array[i]);
                else
                    printf("%d, ", array[i]);
            }

            mid = (left + right) / 2;
            if (value == array[mid])
                return (mid);
            else if (value < array[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
    }
    return (-1);
}
