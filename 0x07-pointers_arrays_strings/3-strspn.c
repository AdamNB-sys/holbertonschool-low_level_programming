#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: source
 * @accept: substring
 * Return: bytes of initial segment s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (b = 0 ; accept[b] != '\0' ; b++)
		{
			if (s[a] == accept[b])
				c++;
			if (a > count)
				return (count);
		}
	}
	return (count);
}
