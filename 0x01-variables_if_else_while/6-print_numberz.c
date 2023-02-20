#include <stdio.h>

/**
  * main - main program
  * Description - A program to print all numbers base 10 from 0-9
  * Return: Returns 0 if everything is working well
*/

int main(void)
{
	int my_num;
	/* using for loop to go through a-z using ASCII */
	for (my_num = 0; my_num <= 9; my_num++)
	{
		putchar(my_num);	
	}
	putchar('\n');
	return (0);
}
