#include "main.h"

/**
 * binary_to_uint - prints binary
 * @b: pointer to binary string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int sum = 0;


	if (b == NULL)
		return (0);

	while (b[x])
	{
		if (b[x] == '1' || b[x] == '0')
		{
			sum = ((sum * 2) + (b[x] - '0'));
		}
		else
		{
			return (0);
		}
		x++;
	}
	return (sum);
}
