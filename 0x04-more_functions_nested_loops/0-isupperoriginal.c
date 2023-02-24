#include <ctype.h>

/**
  * _isupper - function that checks if character c is lower/upper
  * @c: The character to check
  * Return: 1 if uppercase and 0 if otherwise
*/

int _isupper(int c)
{
	int return_value;

	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
