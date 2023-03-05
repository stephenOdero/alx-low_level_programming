#include "main.h"

/**
  * _isalpha- checks for alphabetic character
  * @c: Character to check
  * Return: 1 if an alphabet and 0 if otherwise
  */

int _isalpha(int c)
{
	/* Upper case alphabets */
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	/* Lowercase alphabets */
	else if ((c >= 'a') && (c <= 'z'))
		return (1);
	/* Non alphabets */
	else
		return (0);
}
