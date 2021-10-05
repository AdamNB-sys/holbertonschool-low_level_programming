#include "main.h"
/**
 * print_line - prints a line whose length is determined
 * by the value held in n.
 *@n: the value that will give line length
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
