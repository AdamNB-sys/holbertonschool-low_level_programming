#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds a and b
 * @a: int 1
 * @b: int 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: int 1
 * @b: int 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: int 1
 * @b: int 2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides a by b
 * @a: int 1
 * @b: int 2
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns modulo of a by b
 * @a: int 1
 * @b: int 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
