#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source memory
 * @n: bytes of memory
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = dest;

	while (n--)
	{
		*a++ = *src++;
	}
	return (dest);
}
