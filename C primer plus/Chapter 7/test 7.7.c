#include<stdio.h>
#define WAGE 10			//����ʱн
#define OVERTIME 40		//������ʱ����
#define RANGE1 300		//��λ1����
#define RANGE2 450		//��λ2����
#define RATE1 0.15		//1������˰��
#define RATE2 0.20		//����1��δ����2������˰��
#define RATE3 0.25		//����2�����ֵ�˰��
#define WAGERATE 1.5	//�Ӱ๤�ʱ���
int main(void)
{
	float time;			//��ʱ
	float sum;			//������
	float tax;			//˰��

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