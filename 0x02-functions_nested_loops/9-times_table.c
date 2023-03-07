#include "main.h"

/**
  * times_table- function that prints the 9 times table
  * starting with 0
  */

void times_table(void)
{
	/* Using two counters to do my math */
	int value;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			value = i * j;
			/* Printing the values */
			if ((value / 10) != 0)
				_putchar((value / 10) + '0');
			else if ((value / 10) == 0)
				_putchar(' ');
			else if ((i == 0) && (j ==0))
				_putchar('0');
			_putchar((value % 10) + '0');
			if (j == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
