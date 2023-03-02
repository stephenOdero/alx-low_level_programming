#include <stdio.h>
/**
  * main- testing char pointer
  * Return: 0
  */

int main(void)
{
	char *str;
	int len;

	str = "Stephen Odero";
	
	printf("Size of str is %d\n", sizeof(str));
	printf("My string is %s\n", str);
	
	len = 0;

	while ( str[len] != '\0')
	{
		printf("%c \n", str[len]);
		len++;
	}
	printf("Size of my string is %d bytes.\n", len);

	return (0);
}
