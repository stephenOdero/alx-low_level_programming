#include "main.h"

/**
  * _strlen- function that returns the lenght of a string
  * @s: pointer to the string
  * Return: number of bytes taken by a string
  */

int _strlen(char *s)
{
	int my_length;

	my_length = 0;
	/* Traversing through the string to count bytes */

	while (s[my_length] != '\0')
	{
		my_length++;
	}

	return (my_length);
}
