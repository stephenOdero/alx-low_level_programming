#include "main.h"

/**
  * print_sign- prints the sign of a number
  * @n: number to check
  * Return: 1 and prints + if n is greater than zero
  * returns 0 and prints 0 if n is zero
  * returns -1 and prints - if n is less than zero
  */

int print_sign(int n)
{
	/* If n is greater than 0 */
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	/* If n is equal to zero */
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	/* if n is less than zero */
	else
	{
		_putchar('-');
		return (-1);
	}
}
