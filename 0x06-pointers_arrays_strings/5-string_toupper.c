#include "holberton.h"
/**
 * *string_toupper - converts lowercase characters of a 
 * string to uppercase.
 * @*: string
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		/* ascii for lowercase used */
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = (*(str + i) - 32);
		i++;
	}
	return (str);
}
