#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all prameters
 * @n: integer
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (x = 0 ; x < n ; x++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
