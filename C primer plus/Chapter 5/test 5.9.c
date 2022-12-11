//温度单位转换函数
#include<stdio.h>
void Temperatures(double x);
int main(void)
{
	double t;	//输入的温度
	int count;

	printf("Please enter a temperature value in degrees Fahrenheit:\n");
	count = scanf_s("%lf", &t);
	if (count == 1)
		Temperatures(t);
	else
		;
	printf("Done");
	return 0;
}

void Temperatures(double x)
{
	const double C1 = 5.0;
	const double C2 = 9.0;
	const double C3 = 32.0;		//摄氏温度=C1/C2*(华氏温度-C3)
	const double CK = 273.16;	//开氏温度=摄氏温度+CK
	int count = 1;
	double celsius;
	double kelvin;

	while (count == 1)
	{
		celsius = C1 / C2 * (x - C3);
		kelvin = celsius + CK;
		printf("%.2f℉ is %.2f℃ or %.2fK\n", x, celsius, kelvin);
		printf("Enter the next temperature value:\n");
		count = scanf_s("%lf", &x);
	}
}