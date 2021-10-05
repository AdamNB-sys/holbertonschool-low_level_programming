#include "main.h"
/**
 * print_diagonal - prints a diagonal line whose length is determined
 * by the value held in n.
 * @n: the value that will give line length
 * Return: void
 */
void print_diagonal(int n)
{
	int y = 0;
	int x = 0;

	if (n > 0)
	{
		for (y = 0 ; y < n ; y++)
		{
			for (x = 0 ; x < y ; x++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
