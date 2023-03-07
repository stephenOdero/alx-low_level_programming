#include <stdio.h>

/**
  * main- a program to print the first 50 Fibonacii numbers
  * starting with 1 and 2
  * Return: 0
  */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum;
	int i;

	printf("%ld\n%ld\n", a, b);

	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		printf("%ld", sum);
		a = b;
		b = sum;
		printf("\n");
	}

	return (0);
}
