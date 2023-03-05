#include "main.h"
#include <stdio.h>
/**
  * print_last_digit- prints the last digit of a number
  * @n: my integer to check the last digit
  * Return: the last digit of the number
  */

int print_last_digit(int n)
{
	/* Convert the integer to its absolute value */
	printf("Value before conversion is %d\n", n);
	if (n < 0)
		n = n * -1;
	printf("Value after conversion is %d\n", n);
	/* Printing the last digit */
	_putchar((n % 10) + '0');

	/* Returning the last digit */
	return (n % 10);
}
