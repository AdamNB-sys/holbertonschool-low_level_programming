#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings using malloc
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: pointer to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y;
	unsigned int s1Len = strlen(s1);
	char *point;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	point = malloc(sizeof(*point) * s1Len + n + 1);
	if (point == NULL)
	{
		free(point);
		return (NULL);
	}

	for (x = 0, y = 0 ; x < (s1Len + n) ; x++)
	{
		if (n >= strlen(s2))
			n = strlen(s2);

		if (x < s1Len)
		{
			point[x] = s1[x];
		}
		else
		{
			point[x] = s2[y++];
		}
	}
	point[x] = '\0';
	return (point);
}
