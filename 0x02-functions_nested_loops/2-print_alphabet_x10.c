#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times.
 *
 * Return: Always (0)
 */
void print_alphabet_x10(void)
{
	int a;
	int i;

	for (i = 1; i <=10; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	
	}
}
