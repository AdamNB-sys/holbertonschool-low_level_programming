#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: pointer to number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin = n;

	if (bin > 1)
		print_binary(bin >> 1);
	_putchar((bin & 1) + '0');
}
