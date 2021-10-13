#include "holberton.h"
/**
 * *cap_string - capitalizes all words in a string
 * @str: string
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int j;
	int i = 1;
	char separate[] = "\t\n,.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')

		/* changes first letter of word */
		str[0] -= ('a' - 'A');

	while (str[i] != '\0')
	{
		for (j = 0; separate[j] != '\0'; j++)
		{
			/* checks if element before is aseparator */
			if (str[i - 1] == separate[j] && (separate[i] >= 'a' && separate[i] <= 'z'))

				/* capitalizes if after separator */
				separate[i] -= ('a' - 'A');
		}
		i++;
	}
	return (str);
}
