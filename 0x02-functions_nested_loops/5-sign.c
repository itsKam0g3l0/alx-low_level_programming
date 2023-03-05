#include "main.h"
/**
 * print_sign - prints the sign of a number. 
 * and prints if it is greater, equal or less than 0
 *
 * @c : ASCII code of charecter
 *
 * Return: 1 for less than 0. 0 for 0
 * -1 for less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n , 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
