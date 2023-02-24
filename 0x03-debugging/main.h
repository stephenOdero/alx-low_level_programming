#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int a, int b, int c);

/**
  * positive_or_negative - returns whether a number is > or < 0
  * @i: the integer to check if positive or negative
  */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
}

/**
  * largest_number - returns the largest of 3 numbers
  * @a: first integer
  * @b: second integer
  * @c: third integer
  * Return: largest number
  */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b) && (a > c))
		largest = a;
	else if ((b > a) && (b > c))
		largest = b;
	else if ((c > a) && (c > b))
		largest = c;
	return (largest);
}

#endif /* MAIN_H */
