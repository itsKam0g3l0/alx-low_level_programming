#include "main.h"
/**
 * _isupper - check if c is upper or lowwer case
 *@c: given letter
 * Return: Always 1 if upper case and 0 if not.
 */
int _isupper(int c)
{
	if (c >= 65)
	{
	if (c <= 90)
		return (1);
	}
	return (0);
}
