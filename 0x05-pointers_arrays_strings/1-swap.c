#include "main.h"

/**
  * swap_int- function to swap values of two integers
  * @a: first integer
  * @b: second integer
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	/* a tmp variable to hold content of a when swapping */
	*a = *b;
	*b = tmp;
}
