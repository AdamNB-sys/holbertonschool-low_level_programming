#include "main.h"

/**
 * print_sign - prints whether a number is +, -, or 0.
 *@n: n is stand-in for character
 * Return: 1 and + if pos, -1 and - if neg, and 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
