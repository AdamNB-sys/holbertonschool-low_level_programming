#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0 ; s[n] != '\0' ;)
	{
		n++;
	}
	return (n);
}
