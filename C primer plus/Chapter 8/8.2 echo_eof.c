//重复输入，直到文件结尾
#include<stdio.h>
int main(void)
{
	char ch;

	while ((ch = getchar()) != EOF)
		putchar(ch);
	getchar();

	return 0;
}