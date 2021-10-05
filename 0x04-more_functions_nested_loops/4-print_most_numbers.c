#include "main.h"
/**
 * print_most_numbers - prints numbers 0-9, excluding 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	c = 1;

	for (c = '0' ; c <= '9' ; c++)
	{

		if ((c != '2') && (c != '4'))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
