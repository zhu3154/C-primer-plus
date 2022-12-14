//计算电费
#include<stdio.h>
#define RATE1 0.13230
#define RATE2 0.15040
#define RATE3 0.30025
#define RATE4 0.34025
#define BREAK1 360.0
#define BREAK2 468.0
#define BREAK3 720.0
#define BASE1 (RATE1 * BREAK1)//360度电费
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))//468度电费
#define BASE3 (BASE2 + (RATE3 * (BREAK3 - BREAK2)))//720度电费

int main(void)
{
	double kwh;//用电量
	double bill;//电费

	printf("Please enter the kwh used.\n");
	scanf_s("%lf", &kwh);
	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)
		bill = BASE1 + (kwh - BREAK1) * RATE2;
	else if (kwh <= BREAK3)
		bill = BASE2 + (kwh - BREAK2) * RATE3;
	else
		bill = BASE3 + (kwh - BREAK3) * RATE4;
	printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);

	return 0;
}