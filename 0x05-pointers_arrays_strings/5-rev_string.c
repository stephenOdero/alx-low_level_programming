#include "main.h"

/**
  * rev_string- a function that reverses the input string
  * @s: pointer to my character, more of my string
  * Return: void
  */

void rev_string(char *s)
{
	int length; /* holds the length of my string */
	int i; /* used as my counter */
	int j; /* To be used as my reverse counter */

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i; /* Length of my string */
	j = i - 1;

	char my_string[length]; /* To store my forward string */
	char my_rev_string[length]; /* To store my reverse string */

	for (i = 0; s[i] != '\0'; i++)
	{
		my_string[i] = s[i];
	}

	for (i = 0; my_string[i] != '\0'; i++)
	{
		my_rev_string[i] = my_string[j];
		j--;
	}
	/* Making commitments to the content in s */
	for (i = 0; i < length; i++)
	{
		s[i] = my_rev_string[i];
	}
}
