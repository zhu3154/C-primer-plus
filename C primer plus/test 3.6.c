#include<stdio.h>
int main(void)
{
	long double kt;				//������
	long double num;		//ˮ��������

	printf("Enter a number: ");
	scanf_s("%lf", &kt);
	num = kt * 950.0L / 3.0e-23L;
	printf("The number is %le", num);

	return 0;
}