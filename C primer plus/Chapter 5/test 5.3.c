#include<stdio.h>
#define D_PER_WEAK 7	//Ã¿ÖÜ7Ìì
int main(void)
{
	int time;
	int day, week;
	printf("Please enter a time in days:\n");
	scanf_s("%d", &time);
	while (time > 0)
	{
		week = time / D_PER_WEAK;
		day = time % D_PER_WEAK;
		printf("%d days is %d weeks, %d days.\n", time, week, day);
		printf("Enter the next one:\n");
		scanf_s("%d", &time);
	}

	return 0;
}