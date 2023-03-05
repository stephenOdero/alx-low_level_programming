#include "main.h"

/**
  * jack_bauer- function that prints every minute of the day
  * of Jack Bauer starting from 00:00 to 23:59
  * Return: void
  */

void jack_bauer(void)
{
	/* Declaring variables to use for printing */
	/* h1h2:m1m2 */
	int h1;
	int h2;
	int min1;
	int min2;

	for (h1 = 0; h1 < 3; h1++)
	{
		for (h2 = 0; h2 < 4; h2++)
		{
			for (min1 = 0; min1 < 6; min1++)
			{
				for (min2 = 0; min2 <= 9; min2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
