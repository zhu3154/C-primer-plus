#include<stdio.h>
#define P_YANGJI 2.05		//洋蓟单价
#define P_TIANCAI 1.15		//甜菜单价
#define P_HULUOBO 1.09		//胡萝卜单价
#define RANGE_DIS 100		//超过本消费打折
#define RATE_DIS -0.05		//折扣率
#define RANGE1 5			//第一档运费重量上限
#define RANGE2 20			//第二档运费重量上限
#define YUNFEI0 6.5			//第一档运费
#define YUNFEI1 14			//第二档运费
#define YUNFEI 0.5			//超过二档每榜额外运费
void menu(void);			//主菜单
int main(void)
{
	int option;
	float m;				//单次订购重量
	float m_all;			//总重量
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
			printf("你选择了订购洋蓟\n");
			printf("请输入要订购的重量：\n");
			while (scanf_s("%f", &m))
			{
				while (getchar() != '\n');
				m_yangji += m;
				printf("你订购了 %.2f磅洋蓟，总计订购洋蓟 %.2f磅\n",
					m, m_yangji);
				printf("继续输入订购或输入非数字返回菜单：\n");
			}
			while (getchar() != '\n');
			break;
		case 'b':
		case 'B':
			printf("你选择了订购甜菜\n");
			printf("请输入要订购的重量：\n");
			while (scanf_s("%f", &m))
			{
				while (getchar() != '\n');
				m_tiancai += m;
				printf("你订购了 %.2f磅甜菜，总计订购甜菜 %.2f磅\n",
					m, m_tiancai);
				printf("继续输入订购或输入非数字返回菜单：\n");
			}
			while (getchar() != '\n');
			break;
		case 'c':
		case 'C':
			printf("你选择了订购胡萝卜\n");
			printf("请输入要订购的重量：\n");
			while (scanf_s("%f", &m))
			{
				while (getchar() != '\n');
				m_huluobo += m;
				printf("你订购了 %.2f磅胡萝卜，总计订购胡萝卜 %.2f磅\n",
					m, m_huluobo);
				printf("继续输入订购或输入非数字返回菜单：\n");
			}
			while (getchar() != '\n');
			break;
		case 'q':
		case 'Q':
			goto end;
		default:
			printf("你输入了错误的选项，请重试：\n");
			break;
		}
	}
end:
	m_yangji = m_yangji > 0 ? m_yangji : 0;
	m_tiancai = m_tiancai > 0 ? m_tiancai : 0;
	m_huluobo = m_huluobo > 0 ? m_huluobo : 0;
	printf("品名         重量         "
		"单价         总价\n");
	if (m_yangji > 0)
		printf("洋蓟：  %10.2f磅%10.2f%14.2f\n",
			m_yangji, P_YANGJI, s_yangji = m_yangji * P_YANGJI);
	if (m_tiancai > 0)
		printf("甜菜：  %10.2f磅%10.2f%14.2f\n",
			m_tiancai, P_TIANCAI, s_tiancai = m_tiancai * P_TIANCAI);
	if (m_huluobo > 0)
		printf("胡萝卜：%10.2f磅%10.2f%14.2f\n",
			m_huluobo, P_HULUOBO, s_huluobo = m_huluobo * P_HULUOBO);
	printf("\n总价：%10.2f\n", sum = s_yangji + s_tiancai + s_huluobo);
	if (sum >= RANGE_DIS)
		printf("折扣：%10.2f\n", zhekou = sum * RATE_DIS);
	m_all = m_yangji + m_tiancai + m_huluobo;
	if (m_all <= RANGE1)
		yunfei = YUNFEI0;
	else if (m_all <= RANGE2)
		yunfei = YUNFEI1;
	else
		yunfei = YUNFEI1 + (m_all - RANGE2) * YUNFEI;
	printf("运费：%10.2f\n", yunfei);
	printf("应付费用：%6.2f\n", sum + zhekou + yunfei);

	return 0;
}

void menu(void)
{
	int i;

	for (i = 0; i < 50; i++)
		putchar('*');
	putchar('\n');
	printf("ABC杂货店订购菜单，请输入相应选项前的字母：\n");
	printf("a) 洋蓟 $%4.2f\t\t\tb) 甜菜 $%4.2f\n",
		P_YANGJI, P_TIANCAI);
	printf("c) 胡萝卜 $%4.2f\n", P_HULUOBO);
	printf("q) 退出并结算\n");
	for (i = 0; i < 50; i++)
		putchar('*');
	putchar('\n');
}