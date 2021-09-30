#include "main.h"

/**
 * print_sign - prints whether a number is +, -, or 0.
 *@n: n is stand-in for character
 * Return: 1 and print + if positive, return -1 and prints - if
 * negative, and 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		print_sign('+');
		return (1);
	}
	if (n < 0)
	{
		print_sign('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
