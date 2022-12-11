//一个计算三次方的函数
#include<stdio.h>
void cubic(double x);
int main(void)
{
	double num;

	printf("Enter a double floating point number:\n");
	scanf_s("%lf", &num);
	cubic(num);

	return 0;
}

void cubic(double x)
{
	printf("%g", x * x * x);
}