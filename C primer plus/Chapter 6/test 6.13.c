#include<stdio.h>
int main(void)
{
	int num[8];
	int i;
	int numc;
	
	for (i = 0, numc = 1; i < 8; i++)
		num[i] = numc *= 2;
	i = 0;
	do
	{
		printf("%-4d", num[i]);
		i++;
	} while (i < 8);

	return 0;
}