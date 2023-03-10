#include<stdio.h>
#define OVERTIME 40		//������ʱ����
#define RANGE1 300		//��λ1����
#define RANGE2 450		//��λ2����
#define RATE1 0.15		//1������˰��
#define RATE2 0.20		//����1��δ����2������˰��
#define RATE3 0.25		//����2�����ֵ�˰��
#define WAGERATE 1.5	//�Ӱ๤�ʱ���
void menu(void);

int main(void)
{
	int option;
	double wage = 0;		//ʱн
	float time;				//��ʱ
	float sum;				//������
	float tax;				//˰��

	menu();
	do
	{
		option = getchar();
		while (getchar() != '\n');
		switch (option)
		{
		case 'q':
			goto end;
		case 'a':
			wage = 8.75;
			break;
		case 'b':
			wage = 9.33;
			break;
		case 'c':
			wage = 10.00;
			break;
		case 'd':
			wage = 11.20;
			break;
		default:
			printf("Please enter a number from the menu "
				"(a, b, c, d, q)\n");
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
	printf("a) $8.75/hr\t\t\t\tb) $9.33/hr\n");
	printf("c) $10.00/hr\t\t\t\td) $11.20/hr\n");
	printf("q) quit\n");
	for (i = 0; i < 65; i++)
		putchar('*');
	putchar('\n');
}