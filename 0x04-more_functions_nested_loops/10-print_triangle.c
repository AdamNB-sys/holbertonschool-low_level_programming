#include "main.h"
/**
 * print_triangle - prints a triangle whose size is determined
 * by the value in size
 * @size: the value that will determine size
 * Return: void
 */
void print_triangle(int size)
{
	int y;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (y = 1 ; y <= size ; y++)
	{
		for (x = y ; x < size ; x++)
		{
			_putchar(' ');
		}
		for (x = 1 ; x <= y ; x++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}
