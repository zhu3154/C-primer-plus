#include<stdio.h>
void prime(int n);		//函数prime打印小于等于n的所有素数

int main(void)
{
	double num_in;
	int num;
	int fb;

	printf("Enter a positive integer:\n");
	while (1)
	{
		fb = scanf_s("%lf", &num_in);
		while (getchar() != '\n');
		if (fb == 1)
		{
			num = (int)num_in;
			if (num > 0 && num == num_in)
				break;
		}
		printf("What you entered is not a positive integer, "
			"please enter again:\n");
	}
	prime(num);

	return 0;
}

void prime(int n)
{
	int i;
	int j;
	int k = 0;
	int prime;
	if (n == 1)
		printf("Nothing!\n");
	for (i = 2; i <= n; i++)
	{
		prime = 1;
		for (j = 2; j * j <= i; j++)
			if (i % j == 0)
				prime = 0;
		if (prime == 1)
		{
			printf("%6d", i);
			k++;
			if (k % 8 == 0)
				putchar('\n');
		}
		
	}
}