#include<stdio.h>
int main(void)
{
	int i, j, list[10];

	for (i = 1; i <= 10; i++)
	{
		list[i - 1] = 2 * i + 3;
		for (j = 0; j < i; j++)
			printf(" %d", list[j]);
		printf("\n");
	}

	return 0;
}