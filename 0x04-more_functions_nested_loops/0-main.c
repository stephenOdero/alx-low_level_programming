#include "main.h"
#include <stdio.h>

/**
  * main - Main program
  * Description - A program to check whether the character entered
  * is lower case or upper case
  * Return: 0
*/

int main(void)
{
	char c;
	
	c = 'A';
	
	printf("%c: %d\n", c, _isupper(c));

	c = 'a';

	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
