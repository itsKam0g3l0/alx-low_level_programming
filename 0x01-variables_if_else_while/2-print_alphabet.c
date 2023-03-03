#include <stdio.h>

/**
 * main - Print alphabet in lower case
 * Return: Always (0)
*/

int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
