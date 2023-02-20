#include <stdio.h>

/**
  * main - main function of the program
  * Description - A program to print all possible two digits
  * Return: zero if the program runs well
*/

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (b == 9 && a == 8)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
