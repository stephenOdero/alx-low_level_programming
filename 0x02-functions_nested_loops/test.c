#include <stdio.h>

int my_add(int,int);

int main(void)
{
	int a = 5;
	int min = -2147483648;
	long minMin = (long)min;
	int b = 4;
	int result = my_add(a,b);

	printf("Summ of %d and %d is %d\n", a,b,result);
	printf("Value of min is %d\n", minMin * -1);
	return (0);
}

int my_add(int a, int b)
{
	return (a + b);
}
