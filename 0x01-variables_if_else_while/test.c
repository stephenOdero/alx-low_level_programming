#include <stdio.h>
/**
  * description goes here
  *
*/

int main(void)
{
	int a;
	char my_int_char;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("The number entered is %d\n",a);
	/* Getting the last digit of the inserted number */
	/* my_int_char=itoa(a);*/
	char myName[] = "Stephen Odero";
	printf("My name is %s\n",myName);
	char lastChar = myName[0];
	printf("The last character in my name is: %c\n", lastChar);
	/* printf("Inserted number in Character is %c\n", my_int_char); */
	if (a < 0)
	{
		a = a * -1;
	}
	printf("Last digit of number %d is:\n%d\n", a, a % 10);
	return (0);
}
