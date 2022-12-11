#include<stdio.h>
int main(void)
{
	float num;

	printf("Enter a floating-point value: ");
	scanf_s("%f", &num);
	printf("fixed-point notation: %.2f\n", num);
	printf("exponential notation: %.2e\n", num);
	printf("p notation: %a", num);

	return 0;
}