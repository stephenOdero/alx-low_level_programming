#include "main.h"

/**
  * print_line- draws a straight line in the terminal
  * @n: number of lines to put
  */

void print_line(int n)
{
	int i; /* my counter */

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 0; i < n; i++)
			_putchar('_');

	_putchar('\n');

}
