#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print whether a variable positive or negative or zero
 * Return: Always (0)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n),
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n),
	}
	else if (n == 0)
	{
		printf("%d us zero\n", n),
	return (0);
}