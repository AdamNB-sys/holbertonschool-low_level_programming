#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int x = 0;

	while (str[x] != 0)
	{
		x++;
	}
	for (i = (x - 1) / 2 + 1; i < x ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
