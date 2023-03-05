#include "main.h"

/**
  * _islower- Checks whether character is lower or uppercase
  * @c: character to check whether lower or upper
  * Return: 1 if c is lowercase and 0 otherwise
  */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
