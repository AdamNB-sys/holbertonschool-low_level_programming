#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '1';

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}
