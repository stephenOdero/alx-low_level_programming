#include "main.h"

/**
  * more_numbers- prints 10 times the numbers from 0 to 14
  * using only _putchar thrice in the code
  */

void more_numbers(void)
{
	int i; /* counter for printing */
	int j; /* counter for 0 till 14 */

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
