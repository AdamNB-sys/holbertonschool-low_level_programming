#include "main.h"

/**
 * print_alphabet - prints alphabet using putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
