#include "main.h"

/**
 *_isupper - checks for an uppercase letter
 *@c: c is the character we're looking for
 *Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	/*ASCII values of lowercase used*/
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
