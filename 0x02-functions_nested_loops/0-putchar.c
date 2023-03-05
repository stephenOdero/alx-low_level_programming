#include "main.h"

/**
  * main - Program that prints _putchar folowed by a newline
  * Return: 0
  */

int main(void)
{
	char *my_char = "_putchar";
	int i = 0;

	while (my_char[i] != '\0')
	{
		_putchar(my_char[i]);
		i++;
	}

	/* Printing newline */
	_putchar('\n');

	return (0);
}
