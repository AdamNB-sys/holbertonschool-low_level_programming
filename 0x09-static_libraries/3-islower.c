#include "main.h"

/**
 * _islower - checks for a lowercase character
 *@c: c is the character that we are looking for
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	/*ASCII values of lowercase used*/
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
