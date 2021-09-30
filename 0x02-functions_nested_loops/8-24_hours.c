#include "main.h"

/**
 * jack_bauer - this code outputs 24 hours from 0 to 24:59
 * Return: void
 */
void jack_bauer(void)
{
	int h = 0;

	for (h = 0; h <= 23; h++)
	{
		int m = 0;

		for (m = 0; m <= 59; m++)
		{
			int htens = h / 10;
			int hones = h % 10;
			int mtens = m / 10;
			int mones = m % 10;
	/*below the variables are added to 0 with newline to produce 24hr format*/
			_putchar('0' + htens);
			_putchar('0' + hones);
			_putchar(':');
			_putchar('0' + mtens);
			_putchar('0' + mones);
			_putchar('\n');
		}
	}
}
