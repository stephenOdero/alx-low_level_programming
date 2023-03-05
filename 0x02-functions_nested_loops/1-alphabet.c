#include "main.h"
/**
  * print_alphabet- a function to print alphabets in lowercase
  * Return: void
  */

void print_alphabet(void)
{
	int i;

	/* Printing the alphabets */
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	/* Printing newline */
	_putchar('\n');
}
