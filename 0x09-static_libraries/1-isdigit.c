#include "main.h"

/**
 *_isdigit - checks if c is a digit
 *@c: c is the character we're looking for
 *Return: 1 if c is a digit, 0 if not
 */
int _isdigit(int c)
{
	/*ASCII values of #'s 0-9 used*/
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
