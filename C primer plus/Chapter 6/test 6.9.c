#include<stdio.h>
float output(float a, float b);
int main(void)
{
	float num1, num2;

	printf("Enter two float numbers:\n");
	while (scanf_s("%f %f", &num1, &num2))
	{
		printf("Output: %g\n", output(num1, num2));
		printf("Enter the next:\n");
	}
	printf("Done!\n");

	return 0;
}

float output(float a, float b)
{
	return (a - b) / (a * b);
}