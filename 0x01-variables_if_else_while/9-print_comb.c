#include <stdio.h>
/**
 * main - Entry
 * Description:  prints all possible combinations of single-digit numbers.
 * Return: Always (0)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}