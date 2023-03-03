#include "main.h"
#include <stdio.h>

/**
  * main- check the code
  * Return: 0
  */

int main(void)
{
	char s[40] = "Lorem Ipsum Stephen Odero";

	printf("%s\n", s);

	rev_string(s);

	printf("%s\n", s);

	return (0);
}
