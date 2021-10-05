#include "main.h"
/**
 * more_numbers - prints 0-14 10x
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int inc = 0;
	int itens;
	int iones;

	/* inc is increment to print 10x */
	while (inc < 10)
	{
		inc++;
		/* this section uses putchar to print 0-14 */
		for (i = 0 ; i <= 14 ; i++)
		{
			itens = i / 10;
			iones = i % 10;

			if (itens != 0)
			{
				_putchar(itens + '0');
			}
			_putchar(iones + '0');
		}
	_putchar('\n');
	}
}
