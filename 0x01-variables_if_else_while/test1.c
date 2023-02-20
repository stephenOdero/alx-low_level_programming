#include <stdio.h>
/**
  * comments go here
  *
*/

int main(void)
{
	char a = 123;

	printf("%o is 123 in Octal\n",a);
	printf("%x is 123 in Hexadecimal\n", a);
	printf("%d is 123 in base 10\n", a);
	
	/* Using putchar to print out our values */
	putchar(a);
	putchar('\n');
	return (0);
}
