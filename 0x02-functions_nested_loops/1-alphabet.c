#include "1-main.c"
/**
 * print_alphabet - Entry here
 * Description: prints the alphabet in lowercase
 * Return: Always (0)
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
