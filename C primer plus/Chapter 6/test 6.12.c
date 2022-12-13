#include<stdio.h>
int main(void)
{
	int times = 0;				//次数
	double sum1, sum2;			//和1，和2
	double i;					//计数辅助参数
	int j;

	printf("Enter the times(int,>=1): ");
	scanf_s("%d", &times);
	while (times > 0)
	{
		for (i = 1.0, sum1 = 0.0; i < times + 1; i++)
			sum1 += 1.0 / i;
		for (i = 1.0, j = 1, sum2 = 0.0; i < times + 1; i++, j *= -1)
			sum2 += 1.0 / i * j;
		printf("sum1 = %f\nsum2 = %f\n", sum1, sum2);
		printf("Enter the times(int,>=1): ");
		times = 0;
		scanf_s("%d", &times);
	}
	printf("Done!");

	return 0;
}