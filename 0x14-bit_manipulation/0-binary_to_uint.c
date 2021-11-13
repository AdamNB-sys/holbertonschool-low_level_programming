#include "main.h"
#include "_putchar.c"

/**
 * binary_to_uint - prints binary
 * @b: pointer to binary string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;

	if (b == NULL)
		return (0);

	while (b[x])
	{
		if (x == '1' || x == '0')
		{
			_putchar(x);
		}
		x++;
	}
	return (0);
}
