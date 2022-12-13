#include<stdio.h>
int main(void)
{
	float num1, num2;

	printf("Enter two float numbers;\n");
	while (scanf_s("%f %f", &num1, &num2) == 2)
	{
		printf("Output: %g\n", (num1 - num2) / (num1 * num2));
		printf("Enter the next(q to quit):\n");
	}
	printf("Done!\n");

	return 0;
}