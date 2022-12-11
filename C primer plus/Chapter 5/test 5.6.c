#include<stdio.h>
int main(void)
{
	int sum = 0;
	int count = 0;
	int n;

	printf("Please enter the days:\n");
	scanf_s("%d", &n);
	while (count++ < n)
	{
		sum = sum + count * count;
	}
	printf("sum = %d", sum);

	return 0;
}