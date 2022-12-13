#include<stdio.h>
int main(void)
{
	int a, b;		//下限，上限
	int sum;		//平方和

	printf("Enter lower and upper integer limits: ");
	scanf_s("%d %d", &a, &b);
	while (a < b)
	{
		printf("The sums of the squares from %d to %d is ",
			a * a, b * b);
		for (sum = 0; a <= b; a++)
			sum += a * a;
		printf("%d\n", sum);
		printf("Enter next set of limits: ");
		scanf_s("%d %d", &a, &b);
	}
	printf("Done\n");

	return 0;
}