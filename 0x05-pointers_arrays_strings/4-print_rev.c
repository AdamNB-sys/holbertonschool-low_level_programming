#include "main.h"
/**
 * print_rev - prints a string to stdout in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	char *twoStr = s;
	int i = 0;

	while (*twoStr != '\0')
	{
		twoStr++;
		i++;
	}
	twoStr--;
	while (*twoStr != '\0')
	{
		_putchar(*twoStr);
		twoStr--;
	}
	_putchar('\n');
}
