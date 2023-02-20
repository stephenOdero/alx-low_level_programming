#include <stdio.h>
/**
  *main - main function of the program
  *Description - A program to print all lower and upper case alphabets
  *Return: Returns 0 when everything is working well.
*/

int main(void)
{
	/* Declaring variables for my characters to print */
	char my_char;

	for (my_char = 'a'; my_char <= 'z'; my_char++)
	{
		putchar(my_char);
	}
	/* Printing the uppercase alphabets */
	for (my_char = 'A'; my_char <= 'Z' ; my_char++)
	{
		putchar(my_char);
	}
	/* printing the new ling */
	putchar('\n');
	return (0);
}
