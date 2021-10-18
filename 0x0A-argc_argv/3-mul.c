#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count of args from cmd line
 * @argv: pointer to array of strings from cmd line
 * Return: void
 */
int main(int argc, char **argv)
{
	int product;
	
	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
