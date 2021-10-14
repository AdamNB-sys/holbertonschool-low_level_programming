#include "main.h"
#include "strlen.c"
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
	int len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)

		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
