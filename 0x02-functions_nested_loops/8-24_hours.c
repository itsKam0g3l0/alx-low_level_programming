#include "main.h"
/**
* jack_bauer - prints prints every minute of the day of Jack Bauer
*, starting from 00:00 to 23:59
* @i: integer output
*
* Return: (none)
*/
void jack_bauer(void)
{
	int t;
	int i;
	int m;
	int e;

	for (t = 0; t <= 2; t++)
	{
		for (i = 0; i <= 9; i++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (e = 0; e <= 9; e++)
				{
					if (t >= 2 && i >= 4)
					       break;
					_putchar(t + 48);
					_putchar(i + 48);
					_putchar(58);
					_putchar(m + 48);
					_putchar(e + 48);
					_putchar('\n');
				}
			}
		}
	}
}
