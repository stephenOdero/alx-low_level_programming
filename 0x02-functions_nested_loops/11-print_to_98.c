#include "main.h"
#include <stdio.h>

/**
  * print_to_98- function that prints all natural numbers from n
  * to 98 followed by a newline
  * @n: my starting point
  * Return: void
  */

void print_to_98(int n)
{
	int i; /* my counter */

	/* if n < 98 */
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (n == 97)
				continue;
			printf(", ");
		}
		putchar('\n');
	}
	/* if n > 98 */
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (n == 99)
				continue;
			printf(", ");
		}
		putchar('\n');
	}
	else
	{
		printf("%d", n);
		putchar('\n');
	}
}
