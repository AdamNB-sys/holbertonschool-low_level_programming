#include <stdio.h>
/**
 * main - entry point
 * @argc: count of args from cmd line
 * @argv: pointer to array of strings from cmd line
 * Return: void
 */
int main(int argc, char **argv)
{
	int count;

	for (count = 0 ; count < argc ; count++)
		printf("%s\n", argv[count]);
	
	return (0);
}
