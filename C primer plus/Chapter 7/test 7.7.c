#include<stdio.h>
#define WAGE 10			//基本时薪
#define OVERTIME 40		//基本工时上限
#define RANGE1 300		//档位1上限
#define RANGE2 450		//档位2上限
#define RATE1 0.15		//1档以下税率
#define RATE2 0.20		//超出1挡未超过2档部分税率
#define RATE3 0.25		//超出2档部分的税率
#define WAGERATE 1.5	//加班工资倍率
int main(void)
{
	float time;			//工时
	float sum;			//总收入
	float tax;			//税款

	printf("Enter your working hours: ");
	scanf_s("%f", &time);
	if (time <= OVERTIME)
		sum = WAGE * time;
	else
		sum = WAGE * OVERTIME + WAGERATE * (time - OVERTIME) * WAGE;
	if (sum <= RANGE1)
		tax = sum * RATE1;
	else if (sum <= RANGE2)
		tax = RANGE1 * RATE1 + (sum - RANGE1) * RATE2;
	else
		tax = RANGE1 * RATE1 + (RANGE2 - RANGE1) * RATE2 + (sum - RANGE2) * RATE3;
	printf("Your total wage: $%5.2f\nTax: $%5.2f\nNet revenue: $%5.2f\n",
		sum, tax, sum - tax);
	
	return 0;
}