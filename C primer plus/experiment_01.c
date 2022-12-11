//验证赋值作为子表达式的效果
#include<stdio.h>
int main(void)
{
	int x;
	int y;

	x = 6 + (y = 5);
	printf("x = %d, y = %d", x, y);

	return 0;
}