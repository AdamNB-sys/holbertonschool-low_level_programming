#include "main.h"
/**
 * puts2 - prints a string to stdout followed by newline
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}
	_putchar('\n');
}
