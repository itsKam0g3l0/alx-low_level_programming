#include "main.h"
/**
* print_last_digit - prints the last digit of a number
*
* @i: integer output
*
* Return: last digit
*/
int print_last_digit(int)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else 
	{
		_putchar(ld + 48);
		return (ld)
	}
