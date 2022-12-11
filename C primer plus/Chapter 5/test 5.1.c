#include<stdio.h>
#define MIN_PER_HOUR 60
int main(void)
{
	int time;
	int min, hour;

	printf("Please enter the time in minutes:\n");
	scanf_s("%d", &time);
	while (time > 0)
	{
		hour = time / MIN_PER_HOUR;
		min = time % MIN_PER_HOUR;
		printf("The time is %d hour, %d minute.\n", hour, min);
		printf("Enter the next one:\n");
		scanf_s("%d", &time);
	}
	printf("Done!\n");

	return 0;
}