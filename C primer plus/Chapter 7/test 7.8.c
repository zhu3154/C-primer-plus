#include<stdio.h>
#define OVERTIME 40		//基本工时上限
#define RANGE1 300		//档位1上限
#define RANGE2 450		//档位2上限
#define RATE1 0.15		//1档以下税率
#define RATE2 0.20		//超出1挡未超过2档部分税率
#define RATE3 0.25		//超出2档部分的税率
#define WAGERATE 1.5	//加班工资倍率
void menu(void);

int main(void)
{
	int option;
	double wage = 0;		//时薪
	float time;				//工时
	float sum;				//总收入
	float tax;				//税款

	menu();
	do
	{
		option = getchar();
		while (getchar() != '\n');
		switch (option)
		{
		case '5':
			goto end;
		case '1':
			wage = 8.75;
			break;
		case '2':
			wage = 9.33;
			break;
		case '3':
			wage = 10.00;
			break;
		case '4':
			wage = 11.20;
			break;
		default:
			printf("Please enter a number from the menu "
				"(1, 2, 3, 4, 5)\n");
			menu();
			break;
		}
	} while (wage == 0);

	printf("Your hourly wage is $%.2f/hr.\n", wage);
	printf("Enter your working hours: ");
	scanf_s("%f", &time);
	if (time <= OVERTIME)
		sum = wage * time;
	else
		sum = wage * OVERTIME + WAGERATE * (time - OVERTIME) * wage;
	if (sum <= RANGE1)
		tax = sum * RATE1;
	else if (sum <= RANGE2)
		tax = RANGE1 * RATE1 + (sum - RANGE1) * RATE2;
	else
		tax = RANGE1 * RATE1 + (RANGE2 - RANGE1) * RATE2 + (sum - RANGE2) * RATE3;
	printf("Your total wage: $%5.2f\nTax: $%5.2f\nNet revenue: $%5.2f\n",
		sum, tax, sum - tax);


end:

	return 0;
}

void menu(void)
{
	int i;

	for (i = 0; i < 65; i++)
		putchar('*');
	printf("\n\nEnter the number corresponding to the "
		"desired pay rate or action:\n");
	printf("1) $8.75/hr\t\t\t\t2) $9.33/hr\n");
	printf("3) $10.00/hr\t\t\t\t4) $11.20/hr\n");
	printf("5) quit\n");
	for (i = 0; i < 65; i++)
		putchar('*');
	putchar('\n');
}