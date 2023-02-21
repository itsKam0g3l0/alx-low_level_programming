#include <stdio.h>
/**
 * main - Entry
 * Description: Prints alphabet in lower case backwards
 * Return: Always (0)
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
