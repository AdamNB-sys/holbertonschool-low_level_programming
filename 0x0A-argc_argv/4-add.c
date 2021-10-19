#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: count of args from cmd line
 * @argv: pointer to array of strings from cmd line
 * Return: success 0 fail 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
