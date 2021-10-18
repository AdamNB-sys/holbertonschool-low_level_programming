#include "main.h"
/**
 * *_strstr - finds the first occurance of needle in haystack
 * @haystack: string
 * @needle: substring
 * Return: null or needle
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	int c;

	if (needle[0] == '\0')
		return (0);
	for (a = 0 ; haystack[a] ; a++)
	{
		if (haystack[a] == needle[0])
		{
			for (b = 0, c = a; needle[b] == haystack[c]; b++, c++)
			{
				if (needle[b + 1] == '\0')
					return (&haystack[a]);
			}
		}
	}
	return (0);
}
