#include "holberton.h"
/**
 * *_strncat - concatenates two strings, but uses n bytes from src
 * and src does not need to be null terminated if it contains n or
 * more bytes.
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	char *copy = dest;

	while (*copy != '\0')
	{
		copy++;
	}

	while (n--)
	{
		if (!(*copy++ = *src++))
		{
			return (dest);
		}
	}
	*copy = '\0';

	return (dest);
}
