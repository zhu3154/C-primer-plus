#include<stdio.h>
int main(void)
{
	double num_input;
	int num;
	int sum1 = 0;		//ż����
	int sum2 = 0;		//������
	int i = 0;			//ż������
	int j = 0;			//��������
	int a_num;			//����״̬����

	while (a_num = scanf_s("%lf", &num_input) + 1)		//��ȡ������a_num=2,������a_num=1
	{
		if (a_num == 1)
		{
			getchar();									//ʹ��getchar���������ֻ���
			continue;
		}
		num = (int)num_input;
		if ((double)num != num_input)
			continue;									//����������
		if (num == 0)
			break;										//��ȡ��0ʱ�ж�
		if (num % 2 == 0)
		{
			i++;
			sum1 += num;
		}
		else
		{
			j++;
			sum2 += num;
		}
	}
	printf("Number of even numbers:%2d average:%4.2f\n", i, i > 0 ? (double)sum1 / i : 0);
	printf("Number of odd numbers :%2d average:%4.2f\n", j, j > 0 ? (double)sum2 / j : 0);

	return 0;
}