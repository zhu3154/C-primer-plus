#include<stdio.h>
int main(void)
{
	int a;
	float b;

	a = 2147483647;
	b = 1.234567e-38;

	printf("%d\n", a+1);
	printf("%e", b/100000.0f);

	return 0;
}