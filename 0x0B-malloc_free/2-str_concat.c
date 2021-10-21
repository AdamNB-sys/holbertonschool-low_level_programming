#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer. Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0;
	char *point;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	point = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (point == NULL)
		return (NULL);

	while (*s1)
	{
		point[x] = *s1;
		x++;
		s1++;
	}
	while (*s2)
	{
		point[x] = *s2;
		x++;
		s2++;
	}
	return (point);
}
