#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of memory
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *dst = s;

	while (n-- > 0)
	{
		*dst++ = b;
	}
	return (s);
}
