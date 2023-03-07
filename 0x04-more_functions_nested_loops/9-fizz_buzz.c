#include <stdio.h>

/**
  * main - prints the numbers form 1 to 100 followed by a new line
  * But for multiples of 3, print Fizz instead of the number and
  * for multiples of five print Buzz. For numbers which are
  * multiples of both three and five, print FizzBuzz
  *
  * Return: 0
  */

int main(void)
{
	char *f = "Fizz";
	char *b = "Buzz";
	int i; /* My counter */

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
			printf("%s", f);
		else if (((i % 5) == 0) && ((i % 3) != 0))
			printf("%s", b);
		else if (((i % 3) == 0) && ((i % 5) == 0))
			printf("%s%s", f, b);
		else
			printf("%d", i);

		if (i == 100)
			continue;
		else
			printf(" ");
	}

	printf("\n");

	return (0);
}
