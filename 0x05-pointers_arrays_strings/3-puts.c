#include "main.h"

/**
  * _puts- function that prints a string followed by a newline
  * @str: pointer to the string
  * Return: void
  */

void _puts(char *str)
{
	int my_length = 0;

	while (str[my_length] != '\0')
	{
		_putchar(str[my_length]);
		my_length++;
	}
	_putchar('\n');

}
