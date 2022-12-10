#include<stdio.h>
#define L_PER_GAL 3.785
#define KM_PER_MILE 1.609
int main(void)
{
	float miles;
	float oil;
	float consumption;
	
	printf("Please enter the mileage of your trip in miles:\n");
	scanf_s("%f", &miles);
	printf("Please input your gasoline consumption in gallons:\n");
	scanf_s("%f", &oil);
	consumption = oil * L_PER_GAL / (miles * KM_PER_MILE) * 100;
	printf("Your gas mileage is %.1f miles per gallon or "
		"%.1f kilometers per hundred kilometers",
		miles / oil, consumption);

	return 0;
}