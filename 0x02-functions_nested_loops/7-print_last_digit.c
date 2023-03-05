#include "main.h"
/**
* print_last_digit - prints the last digit of a number
*
* @int: integer
*
* Return: last digit
*/
int print_last_digit(int)
{
	int ld;

	ld = (ld % 10);
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
