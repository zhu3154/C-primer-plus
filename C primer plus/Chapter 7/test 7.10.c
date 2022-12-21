#include<stdio.h>
#define RATE1 0.15
#define RATE2 0.28
#define RANGE1 17850		//单身第一档位
#define RANGE2 23900		//户主第一档位
#define RANGE3 29750		//共有第一档位
#define RANGE4 14875		//离异第一档位
void menu(void);			//打印菜单函数
int main(void)
{
	double income;			//应纳税收入，读取用户输入
	double tax;				//应缴纳税款
	int option;				//输入的选项
	double range;

	while (1)
	{
		menu();
		range = 0;
		option = getchar();
		while (getchar() != '\n');		//清空输入缓冲
		switch (option)
		{
		case '1':
			range = RANGE1;
			printf("你选择的是： 单身\n");
			break;
		case '2':
			range = RANGE2;
			printf("你选择的是： 户主\n");
			break;
		case '3':
			range = RANGE3;
			printf("你选择的是： 已婚，共有\n");
			break;
		case '4':
			range = RANGE4;
			printf("你选择的是： 已婚，离异\n");
			break;
		case '5':
			goto quit;
		default:
			printf("你的输入错误，请按菜单提示操作：\n");
			break;
		}
		if (range > 0)
		{
			printf("请输入你的应纳税收入(输入非数字返回）：\n");
			while (scanf_s("%lf", &income))
			{
				if (income <= range)
					tax = income * RATE1;
				else
					tax = range * RATE1 + (income - range) * RATE2;
				printf("你的收入 %4.2f 应缴纳的税金为：%4.2f\n", income, tax);
				printf("继续输入或输入非数字返回：\n");
				while (getchar() != '\n');			//清空输入缓冲
			}
			while (getchar() != '\n');				//清空输入缓冲
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
	printf("\n\n请选择你的纳税类别：（输入选项数字并按下ENTER）\n");
	printf("1) 单身\t\t\t\t2) 户主\n");
	printf("3) 已婚，共有\t\t\t4) 已婚，离异\n");
	printf("5) 退出\n");
	for (i = 0; i < 50; i++)
		putchar('*');
	putchar('\n');
}
