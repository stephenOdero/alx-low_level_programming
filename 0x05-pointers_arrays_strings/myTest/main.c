#include <stdio.h>
#include "main.h"

/**
  * main - check the code
  * Return: always 0
  */

int main(void)
{
	int n;

	n = 402;

	printf("n = %d\n", n);

	reset_to_98(&n);

	printf("n = %d after reset.\n", n);

	return (0);
}
