//验证赋值表达式作为子表达式的结果
#include<stdio.h>
int main(void)
{
	int x;
	int y;

	x = 6 + (y = 5);
	printf("x = %d, y = %d", x, y);

	getchar();

	return 0;
}