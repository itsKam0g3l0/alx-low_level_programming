#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print the last digit of the number
 * Return: Always (0)
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if ((lastDigit % 10) > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n",
			n);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 10);
	}
	return (0);
}
