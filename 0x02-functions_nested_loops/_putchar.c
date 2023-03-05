#include <unistd.h>

/**
  * _putchar- a program to print a character
  * @c: character to print
  * Return: Value of character
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
