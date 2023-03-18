//验证scanf返回值
#include<stdio.h>
int main(void)
{
	int x;
	int n;
	n = scanf_s("%d", &x);
	printf("%d\n%d", x, n);

	return 0;
}