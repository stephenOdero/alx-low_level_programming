#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - the main entry to the program
  * Description - A program to print the last digit
  * Return: Returns 0 if the program works well.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		n = n * -1;
		/* Using only the positive values of n */
	}
	/* To find the last digit, use the Num % 10 to get */
	printf("%d\n", n % 10);

	return (0);
}
