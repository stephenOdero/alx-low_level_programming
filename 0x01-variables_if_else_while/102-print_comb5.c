#include <stdio.h>

/**
  * main - main function of the program
  * Description - A program to print four possible numbers
  * Return: zero if the program runs well
*/

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
		for (c = a; c <= 9; c++)
		{
			for ( d = b + 1; d <= 9; d++)
			{
			putchar('0' + a);
			putchar('0' + b);
			putchar(' ');
			putchar('0' + c);
			putchar('0' + d);
			if (b == 8 && a == 7 && c == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
			}	
		}
		}
	}
	putchar('\n');

	return (0);
}
