#include "main.h"
/**
* jack_bauer - prints prints every minute of the day of Jack Bauer
*, starting from 00:00 to 23:59
*
* Return: (none)
*/
void jack_bauer(void)
{
	int t;
	int l;
	int m;
	int e;

	for (t = 0; t <= 2; t++)
	{
		for (l = 0; l <= 9; l++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (e = 0; e <= 9; e++)
				{
					if (t >= 2 && l >= 4)
					{
						break;
					_putchar(t + '0');
					_putchar(l + '0');
					_putchar(58);
					_putchar(m + '0');
					_putchar(e + '0');
					_putchar('\n');
					}
				}
			}
		}
	}
}
