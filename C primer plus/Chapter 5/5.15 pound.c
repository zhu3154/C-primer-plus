//定义一个带一个参数的函数
#include<stdio.h>
void pound(int n);
int main(void)
{
	int times = 5;
	char ch = '!';		//!的ASC码为33
	float f = 6.0f;

	pound(times);
	pound(ch);
	pound(f);

	return 0;
}

void pound(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}