#include <stdio.h>

/**
  * main - main function of the program
  * Description - A program to print all possible three digits
  * Return: zero if the program runs well
*/

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
		for (c = b + 1; c <= 9; c++)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar('0' + c);
			if (b == 8 && a == 7 && c == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}
