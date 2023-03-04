#include <stdio.h>
/**
 * main - Entry
 * Description: prints all single digit numbers of base 16 starting from 0
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int a;
	
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (a = 65; a < 71; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
