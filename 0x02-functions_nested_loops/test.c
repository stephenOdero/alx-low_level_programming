#include <stdio.h>

int my_add(int,int);

int main(void)
{
	int a = 5;
	int b = 4;
	int result = my_add(a,b);

	printf("Summ of %d and %d is %d\n", a,b,result);
	
	return (0);
}

int my_add(int a, int b)
{
	return (a + b);
}
