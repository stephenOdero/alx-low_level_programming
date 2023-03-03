#include <stdio.h>

/**
  * rev_string- a function that reverses the input string
  * @s: pointer to my character, more of my string
  * Return: void
  */

void rev_string(char *s)
{
	/* get the length of the string */
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	int j = i - 1; /* full size of the string */
	
	char rev[i];
	char ptr[i]; /* to hold value of what is stored in the memory address */

	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	/* Reversing my string */
	i = 0;
	while (ptr[i] != '\0')
	{
		rev[i] = ptr[j];
		i++;
		j--;
	}
	
	printf("Value stored in rev is %s\n", rev);
	printf("value stored in ptr is %s\n", ptr);
}

int main(void)
{
	char s[]="My School";

	rev_string(s);
	printf("\nValue of s is %p\n", s);

	return (0);
}
