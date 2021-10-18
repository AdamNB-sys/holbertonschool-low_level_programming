#include <stdio.h>
/**
 * main - entry point
 * @argc: count of args from cmd line
 * @argv: pointer to array of strings from cmd line
 * Return: void
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
