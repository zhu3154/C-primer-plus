#include<stdio.h>
int main(void)
{
	float num;

	printf("Please enter a float number:\n");
	scanf_s("%f", &num);
	printf("The input is %.1f or %.1e.\n", num, num);
	printf("The input is %+.3f or %.3E.\n", num, num);

	return 0;
}