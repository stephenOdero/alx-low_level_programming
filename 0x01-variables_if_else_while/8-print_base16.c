#include <stdio.h>

/**
  * main - main function of the program
  * Description - a program to print all the base 16 numbers
  * Return: zero when the program runs without an error
*/

int main(void)
{
	int a;
	int b = 97;

	for (a = 0; a < 16; a++)
	{
		/* putchar('0'+a); */
		if (a <= 9)
		{
			putchar('0' + a);
		}
		else if (a > 9)
		{
			putchar(b);
			b++;
		}
	}
	putchar('\n');

	return (0);
}
