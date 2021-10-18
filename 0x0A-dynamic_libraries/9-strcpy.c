#include "main.h"
/**
 * *_strcpy - copies a string that a pointer points to
 * to another pointer location
 * @src: string to be copied
 * @dest: destination
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
