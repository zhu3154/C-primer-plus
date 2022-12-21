#include<stdio.h>
#define RATE1 0.15
#define RATE2 0.28
#define RANGE1 17850		//�����һ��λ
#define RANGE2 23900		//������һ��λ
#define RANGE3 29750		//���е�һ��λ
#define RANGE4 14875		//�����һ��λ
void menu(void);			//��ӡ�˵�����
int main(void)
{
	double income;			//Ӧ��˰���룬��ȡ�û�����
	double tax;				//Ӧ����˰��
	int option;				//�����ѡ��
	double range;

	while (1)
	{
		menu();
		range = 0;
		option = getchar();
		while (getchar() != '\n');		//������뻺��
		switch (option)
		{
		case '1':
			range = RANGE1;
			printf("��ѡ����ǣ� ����\n");
			break;
		case '2':
			range = RANGE2;
			printf("��ѡ����ǣ� ����\n");
			break;
		case '3':
			range = RANGE3;
			printf("��ѡ����ǣ� �ѻ飬����\n");
			break;
		case '4':
			range = RANGE4;
			printf("��ѡ����ǣ� �ѻ飬����\n");
			break;
		case '5':
			goto quit;
		default:
			printf("�����������밴�˵���ʾ������\n");
			break;
		}
		if (range > 0)
		{
			printf("���������Ӧ��˰����(��������ַ��أ���\n");
			while (scanf_s("%lf", &income))
			{
				if (income <= range)
					tax = income * RATE1;
				else
					tax = range * RATE1 + (income - range) * RATE2;
				printf("������� %4.2f Ӧ���ɵ�˰��Ϊ��%4.2f\n", income, tax);
				printf("�����������������ַ��أ�\n");
				while (getchar() != '\n');			//������뻺��
			}
			while (getchar() != '\n');				//������뻺��
		}
	}

quit:
	return 0;

}

void menu(void)
{
	int i;

	for (i = 0; i < 50; i++)
		putchar('*');
	printf("\n\n��ѡ�������˰��𣺣�����ѡ�����ֲ�����ENTER��\n");
	printf("1) ����\t\t\t\t2) ����\n");
	printf("3) �ѻ飬����\t\t\t4) �ѻ飬����\n");
	printf("5) �˳�\n");
	for (i = 0; i < 50; i++)
		putchar('*');
	putchar('\n');
}
