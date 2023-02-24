#include "main.h"

/**
  * _isupper - function that checks if character c is lower/upper
  * @c: The character to check
  * Return: 1 if uppercase and 0 if otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
