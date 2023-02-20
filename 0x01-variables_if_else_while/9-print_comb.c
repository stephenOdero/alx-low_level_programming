#include <stdio.h>

/**
  *main - main function of the program
  *Description - A program to print all single combinations of numbers
  *Return: zero if the program works well
*/

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
		if (a == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
