#include "main.h"

/**
 * print_alphabet - prints alphabet using _putchar
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
/**
 * print_alphabet_x10 - prints alphabet x10 using print_alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		print_alphabet();
	}
}
