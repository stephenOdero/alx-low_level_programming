#include "main.h"

/**
  * puts2- function that prints every other character of a string
  * starting with the first character, followed by a new line.
  * @str: pointer to the string
  * Return: void
  */

void puts2(char *str)
{
	int my_length = 0;

	while (str[my_length] != '\0')
	{
		_putchar(str[my_length]);
		my_length += 2;
	}
	_putchar('\n');

}
