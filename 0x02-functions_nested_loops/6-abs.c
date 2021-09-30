#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@n: n is stand-in for integer
 * Return: 1 and + if pos, -1 and - if neg, and 0 if 0
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
