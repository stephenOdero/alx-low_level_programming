#include <stdio.h>
/**
  * main- to test on while loop
  * Return: 0
  */

int main(void)
{
	char *my_char = "Stephen";
	int i;
	int my_length = 0;

	while (my_char[my_length] != '\0')
	{
		my_length++;
	}

	i = my_length - 1;

	while (i >= 0)
	{
		printf("%c", my_char[i]);
		i--;
	}
	
	printf("\nEnd of printing.\n");
	return (0);
}
