#include<stdio.h>
int main(void)
{
	float h_cm;//�������
	float h_yc;//���Ӣ��

	printf("Please enter your height: ");
	scanf_s("%f", &h_yc);
	h_cm = h_yc * 2.54;
	printf("Your height is %.2f in cm.", h_cm);

	return 0;
}