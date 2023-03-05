#include "main.h"
/**
 * _isalpha - checks for alphabetic character 
 * if lower shows 0
 *
 * @c : ASCII code of charecter
 *
 * Return: 1 for letter and 0 if not
 */
int _isalpha(int c)
{	
	if ((c >= 97 && c <= 122) || ( c >= 65 && c <= 90))
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('n\');
}

