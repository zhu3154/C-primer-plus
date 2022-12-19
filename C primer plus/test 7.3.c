#include<stdio.h>
int main(void)
{
	double num_input;
	int num;
	int sum1 = 0;		//偶数和
	int sum2 = 0;		//奇数和
	int i = 0;			//偶数个数
	int j = 0;			//奇数个数
	int a_num;			//输入状态反馈

	while (a_num = scanf_s("%lf", &num_input) + 1)		//读取到数字a_num=2,非数字a_num=1
	{
		if (a_num == 1)
		{
			getchar();									//使用getchar跳过非数字缓存
			continue;
		}
		num = (int)num_input;
		if ((double)num != num_input)
			continue;									//跳过浮点数
		if (num == 0)
			break;										//读取到0时中断
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