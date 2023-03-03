#include "main.h"

/**
  * puts_half- function that prints half of a string followed
  * by a new line.
  * @str: pointer to my string
  * Return: void
  */

void puts_half(char *str)
{
	int length = 0; /* Getting length of string */
	int n; /* Gets where to start printing from */

	while (str[length] != '\0')
	{
		length++;
	}
	if ((length % 2) == 0)
		n = length / 2;
	else if ((length % 2) == 1)
		n = (length - 1) / 2;

	for (int i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
