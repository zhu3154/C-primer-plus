#include<stdio.h>
int main(void)
{
	long double kt;				//夸脱数
	long double num;		//水分子数量

	printf("Enter a number: ");
	scanf_s("%lf", &kt);
	num = kt * 950.0L / 3.0e-23L;
	printf("The number is %le", num);

	return 0;
}