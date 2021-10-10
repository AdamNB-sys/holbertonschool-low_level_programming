#include "holberton.h"
/**
 * reverse_array - reverses n number of integers in an array
 * @n: number of integers
 * @a: array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	while (i < n / 2)
	{
		temp = *(a + i);
		*(a + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = temp;
		i++;
	}
}
