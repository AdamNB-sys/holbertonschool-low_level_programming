#include "main.h"
/**
 * print_square - prints a square whose size is determined
 * by the value in size
 * @size: the value that will determine square size
 * Return: void
 */
void print_square(int size)
{
	int y;
	int x;

	for (x = 1 ; x <= size ; x++)
	{
		for (y = 1 ; y <= size ; y++)
		{
		_putchar(35);
		}
	_putchar('\n');
	}
}
