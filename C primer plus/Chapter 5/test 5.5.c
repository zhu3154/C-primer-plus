#include<stdio.h>
int main(void)
{
	int count = 0;
	int sum = 0;
	int day;

	printf("Pleaes enter the days:\n");
	scanf_s("%d", &day);
	while (count++ < day)
	{
		sum = sum + count;
	}
	printf("sum = %d", sum);

	return 0;
}