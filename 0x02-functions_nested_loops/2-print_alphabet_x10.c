#include "main.h"
/**
  * print_alphabet_x10- Prints 10 times the alphabet in lowercase
  * Return: void
  */

void print_alphabet_x10(void)
{
	/* Declaring my counters */
	int i; /* Loop counter */
	int j; /* Printing the alphabets */

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
