#include <stdio.h>
/**
 * main - Entry
 * Description:  prints all  all possible different combinations of two digits.
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int a;

	for (n = 48; n <= 57; n++)
	{
	for (a = 48; a <= 57; a++)
{
		if (n == a)
		{
			continue;
		}
		char c = (" %d,%d,", n, a);
		char d = (" %d,%d," a, n);
		putchar(c);
		putchar(d);
		putchar(',');
		putchar(' ');
}
}
	putchar('\n');
	return (0);
}
