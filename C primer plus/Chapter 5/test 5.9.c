//�¶ȵ�λת������
#include<stdio.h>
void Temperatures(double x);
int main(void)
{
	double t;	//������¶�
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
	const double C3 = 32.0;		//�����¶�=C1/C2*(�����¶�-C3)
	const double CK = 273.16;	//�����¶�=�����¶�+CK
	int count = 1;
	double celsius;
	double kelvin;

	while (count == 1)
	{
		celsius = C1 / C2 * (x - C3);
		kelvin = celsius + CK;
		printf("%.2f�H is %.2f�� or %.2fK\n", x, celsius, kelvin);
		printf("Enter the next temperature value:\n");
		count = scanf_s("%lf", &x);
	}
}