#include "main.h"

/**
 * _isalpha - checks if c is a letter
 *@c: c is the character that we are looking for
 * Return: 1 if c is a letter. 0 if not
 */
int _isalpha(int c)
{
	/*ASCII values of letters*/
	if ((c >= 65) && (c <= 90))
		return (1);
	else if ((c >= 98) && (c <= 122))
		return (1);
	else
		return (0);
}
