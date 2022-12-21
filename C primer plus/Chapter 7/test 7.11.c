#include<stdio.h>
#define P_YANGJI 2.05		//�󼻵���
#define P_TIANCAI 1.15		//��˵���
#define P_HULUOBO 1.09		//���ܲ�����
#define RANGE_DIS 100		//���������Ѵ���
#define RATE_DIS -0.05		//�ۿ���
#define RANGE1 5			//��һ���˷���������
#define RANGE2 20			//�ڶ����˷���������
#define YUNFEI0 6.5			//��һ���˷�
#define YUNFEI1 14			//�ڶ����˷�
#define YUNFEI 0.5			//��������ÿ������˷�
void menu(void);			//���˵�
int main(void)
{
	int option;
	float m;				//���ζ�������
	float m_all;			//������
	float m_yangji = 0;
	float m_tiancai = 0;
	float m_huluobo = 0;
	float s_yangji = 0;
	float s_tiancai = 0;
	float s_huluobo = 0;
	float sum;
	float yunfei;
	float zhekou = 0;

	while (1)
	{
		menu();
		option = getchar();
		while (getchar() != '\n');
		switch (option)
		{
		case 'a':
		case 'A':
			printf("��ѡ���˶�����\n");
			printf("������Ҫ������������\n");
			while (scanf_s("%f", &m))
			{
				while (getchar() != '\n');
				m_yangji += m;
				printf("�㶩���� %.2f���󼻣��ܼƶ����� %.2f��\n",
					m, m_yangji);
				printf("�������붩������������ַ��ز˵���\n");
			}
			while (getchar() != '\n');
			break;
		case 'b':
		case 'B':
			printf("��ѡ���˶������\n");
			printf("������Ҫ������������\n");
			while (scanf_s("%f", &m))
			{
				while (getchar() != '\n');
				m_tiancai += m;
				printf("�㶩���� %.2f����ˣ��ܼƶ������ %.2f��\n",
					m, m_tiancai);
				printf("�������붩������������ַ��ز˵���\n");
			}
			while (getchar() != '\n');
			break;
		case 'c':
		case 'C':
			printf("��ѡ���˶������ܲ�\n");
			printf("������Ҫ������������\n");
			while (scanf_s("%f", &m))
			{
				while (getchar() != '\n');
				m_huluobo += m;
				printf("�㶩���� %.2f�����ܲ����ܼƶ������ܲ� %.2f��\n",
					m, m_huluobo);
				printf("�������붩������������ַ��ز˵���\n");
			}
			while (getchar() != '\n');
			break;
		case 'q':
		case 'Q':
			goto end;
		default:
			printf("�������˴����ѡ������ԣ�\n");
			break;
		}
	}
end:
	m_yangji = m_yangji > 0 ? m_yangji : 0;
	m_tiancai = m_tiancai > 0 ? m_tiancai : 0;
	m_huluobo = m_huluobo > 0 ? m_huluobo : 0;
	printf("Ʒ��         ����         "
		"����         �ܼ�\n");
	if (m_yangji > 0)
		printf("�󼻣�  %10.2f��%10.2f%14.2f\n",
			m_yangji, P_YANGJI, s_yangji = m_yangji * P_YANGJI);
	if (m_tiancai > 0)
		printf("��ˣ�  %10.2f��%10.2f%14.2f\n",
			m_tiancai, P_TIANCAI, s_tiancai = m_tiancai * P_TIANCAI);
	if (m_huluobo > 0)
		printf("���ܲ���%10.2f��%10.2f%14.2f\n",
			m_huluobo, P_HULUOBO, s_huluobo = m_huluobo * P_HULUOBO);
	printf("\n�ܼۣ�%10.2f\n", sum = s_yangji + s_tiancai + s_huluobo);
	if (sum >= RANGE_DIS)
		printf("�ۿۣ�%10.2f\n", zhekou = sum * RATE_DIS);
	m_all = m_yangji + m_tiancai + m_huluobo;
	if (m_all <= RANGE1)
		yunfei = YUNFEI0;
	else if (m_all <= RANGE2)
		yunfei = YUNFEI1;
	else
		yunfei = YUNFEI1 + (m_all - RANGE2) * YUNFEI;
	printf("�˷ѣ�%10.2f\n", yunfei);
	printf("Ӧ�����ã�%6.2f\n", sum + zhekou + yunfei);

	return 0;
}

void menu(void)
{
	int i;

	for (i = 0; i < 50; i++)
		putchar('*');
	putchar('\n');
	printf("ABC�ӻ��궩���˵�����������Ӧѡ��ǰ����ĸ��\n");
	printf("a) �� $%4.2f\t\t\tb) ��� $%4.2f\n",
		P_YANGJI, P_TIANCAI);
	printf("c) ���ܲ� $%4.2f\n", P_HULUOBO);
	printf("q) �˳�������\n");
	for (i = 0; i < 50; i++)
		putchar('*');
	putchar('\n');
}