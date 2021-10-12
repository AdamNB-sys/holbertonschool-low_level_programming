#include "main.h"
/**
 * *_strpbrk - finds matching bytes
 * @s: first string
 * @accept: second string
 *
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *scan;

	int c, sc;

	while ((c = *s++) != 0)
	{
		for (scan = accept; (sc = *scan++) != 0;)
			if (sc == c)
				return ((char *)(s - 1));
	}
	return (0);
}
