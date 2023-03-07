#include <stdio.h>
/**
 * main - prints out unique two digit combinations
 *
 * Return: (0)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 8; i++)
	{
		for (b = a + 1; b <= 9; j++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a < 8)
				{
				putchar(',');
				putchar(' ');
				}
		}
		}
		return (0);
}
