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
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = (n % 10);
	/* your code goes there */
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
	printf("%d and is greater than 5", lastDigit);
	}
	if (lastDigit == 0)
	{
	printf("%d and is 0", lastDigit);
	}
	if (lastDigit < 6 && lastDigit != 0)
	{
	printf("%d and is less than 6 and not 0", lastDigit);
	}
	printf("\n");
	return (0);
}
