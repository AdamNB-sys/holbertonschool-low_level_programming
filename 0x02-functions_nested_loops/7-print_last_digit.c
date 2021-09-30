#include "main.h"

/**
 * print_last_digit - find the last digit of an integer
 *@n: n is stand-in for integer
 * Return: the last digit of n to stdout
 */
int print_last_digit(int n)
{
	n = (n % 10);
	/*n is equal to modulo 10*/
	if (n < 10)
	{
		n = -n;
	}
	/*if the remainder is negative, it's converted to pos*/
		return (n);
}
