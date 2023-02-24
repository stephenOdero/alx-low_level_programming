/* #include "main.h" */
#include <stdio.h>
#include <string.h>
/**
  * main - main function of the program
  * Description - A program that prints _putchar followed
  * by a new line
  * Return: 0 when everything is working well
*/

int main(void)
{
	char myString[]="_putchar";
	int i;
	int strLength = strlen(myString);

	for (i = 0; i < strLength; i++)
	{
		putchar(myString[i]);
	}
	putchar('\n');

	return (0);
}
