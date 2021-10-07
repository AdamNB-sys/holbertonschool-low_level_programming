#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - prints a string to stdout in reverse
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char *begin, *end, temp;

	len = _strlen(s);
	begin = s;
	end = s;

	for (i = 0 ; i < len - 1 ; i++)
	{
		end++;
	}
	for (i = 0 ; i < len / 2 ; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
