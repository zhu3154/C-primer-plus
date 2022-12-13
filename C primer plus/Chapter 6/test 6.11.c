#include<stdio.h>
int main(void)
{
	int num[8];
	int i = 0;
	int j;

	printf("Enter 8 integers:\n");
	while (scanf_s("%d", &num[i]) == 1)
	{
		i++;
		if (i == 8)
		{
			for (j = 7; j >= 0; j--)
				printf("%-4d", num[j]);
			i = 0;
			printf("\nEnter the next:\n");
		}
	}
	printf("Done\n");

	return 0;
}