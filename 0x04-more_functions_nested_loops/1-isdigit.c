#include "main.h"
/**
 * _isupper - check if c is digit
 *@c: input charecter
 * Return: Always 1 if upper case and 0 if not.
 */
int _isdigit(int c)
{
	if (c >= 48)
	{
	if (c <= 57)
		return (1);
	}
	return (0);
}
