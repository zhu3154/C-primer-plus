#include<stdio.h>
int main(void)
{
	int num;
	int count = 0;

	printf("Please enter an integer:\n");
	scanf_s("%d", &num);
	printf("From %d to %d :\n", num, num + 10);
	while (count++ < 11)
	{
		printf("%d ", num++);
	}

	return 0;
}