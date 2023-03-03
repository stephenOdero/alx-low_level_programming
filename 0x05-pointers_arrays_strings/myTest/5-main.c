#include <stdio.h>
/**
  * main- testing character and string
  * Return: 0
  */

int main(void)
{
	char s[10] = "My School";
	char *my_char = s;
	
	for (int i = 0; i < 10; i ++)
	{
		printf("%s\n", my_char);
	}

	printf("%s\n", my_char);

	return (0);
}
