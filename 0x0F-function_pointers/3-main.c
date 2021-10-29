#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - is a basic arithmetic calculator
 * @argc: number of args
 * @argv: array of args
 * Return: result
 */
int main(int argc, char *argv[])
{
	int total, a, b, (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (atoi(argv[3]) == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	total = func(a, b);
	printf("%d\n", total);
	return (0);
}
