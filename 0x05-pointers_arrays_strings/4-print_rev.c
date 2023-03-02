#include "main.h"

/**
  * print_rev- a function that prints a string in reverse
  * followed by a new line.
  * @s: pointer to my character, more of my string
  * Return: void
  */

void print_rev(char *s)
{
	int i;
	int my_length = 0;

	/* Determining the length of our string */
	while (s[my_length] != '\0')
	{
		my_length++;
	}

	/* Printing my string */
	i = my_length - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
