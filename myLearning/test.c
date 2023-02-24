#include <stdio.h>
/*
 * Comments go here
*/

int main(void)
{
	int a = 0;
	unsigned int e;
	int b = 4;
	float c;
	char d;

	while (a < b)
	{
		printf("%d\n",a++);
	}
	printf("Size of an Integer is %d bytes\n",sizeof(a));
	printf("Size of a character is %d bytes\n",sizeof(d));
	printf("Size of a float number is %d bytes\n",sizeof(c));
	printf("Size of an unsigned number is %d bytes\n",sizeof(e));

	return (0);
}
