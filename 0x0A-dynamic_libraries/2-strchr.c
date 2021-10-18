#include "main.h"
/**
 * *_strchr - searches for a certain character on a string
 * @s: pointer to the string
 * @c: the character we're looking for
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s != c)
		return (0);
	else
		return (s);
}
