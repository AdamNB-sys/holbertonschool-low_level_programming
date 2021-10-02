#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int n, m, p;
	/*prints y axis */
	for (n = 0; n <= 9; n++)
	{
	/*prints x axis */
		for (m = 0; m <= 9; m++)
		{
			putchar(',');
			putchar(' ');


			p = n * m;

			if (p <= 9)
				putchar(' ');
			else
				putchar((p / 10) + '0');

			putchar((p % 10) + '0');
		}
		putchar('\n');
	}
}
