#include <stdio.h>

/**
  * main - main program
  * Description - A program that prints the alphabets in lower case
  * skipping letters 'q' and 'e'
  * Return: Returns 0 if everything is working well
*/

int main(void)
{
	char my_char;
	/* using for loop to go through a-z using ASCII */
	for (my_char = 'a'; my_char <= 'z'; my_char++)
	{
		if (my_char == 'q' || my_char == 'e')
		{
			continue;
		}
		putchar(my_char);
	}
	putchar('\n');
	return (0);
}
