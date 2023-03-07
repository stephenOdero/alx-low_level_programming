#include "main.h"

/**
  * _abs- computes the absolute value of an integer
  * @x: integer to change to absolute value
  * Return: Absolute value of the integer
  */

int _abs(int x)
{
	/* if x is positive */
	if (x > 0)
		return (x);
	/* if x is zero */
	else if (x == 0)
		return (0);
	/* If x is negative */
	else
		return (x * -1);

}
