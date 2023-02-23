#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times.
 *
 * Return: Always (0)
 */
void print_alphabet_x10(void)
{
	int i;
	int a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			-putchar(a);
		}
		_putchar('n\');
	}
}
