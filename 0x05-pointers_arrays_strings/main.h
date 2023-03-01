#ifndef MAIN_H_
#define MAIN_H_
#include <ctype.h>
#include <unistd.h>

int _putchar(char c);
void reset_to_98(int *n);
/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  * Return: On success 1, On error -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  * reset_to_98- takes a pointer to an int as a parameter
  * and updates the value it points to to 98
  * @n: pointer to an integer to change value to 98
  * Return: void
  */

void reset_to_98(int *n)
{
	*n = 98;
}
#endif
