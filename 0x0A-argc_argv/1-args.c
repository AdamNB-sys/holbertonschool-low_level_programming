#include <stdio.h>
/**
 * main - entry point
 * @argc: count of args from cmd line
 * @argv: pointer to array of strings from cmd line
 * Return: void
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
