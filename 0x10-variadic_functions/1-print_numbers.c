#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by newline
 * @separator: the string printed between numbers
 * @n: the number of ints passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (x = 0 ; x < n - 1 ; x++)
	{
		if (separator == NULL)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
