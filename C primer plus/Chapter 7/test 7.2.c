#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int n = 0;	//输入字符计数
	int i;		//输出字符计数
	char chs[200];

	printf("Enter some characters(# to end input):\n");
	while ((chs[n] = getchar()) != '#')		//跳过非打印字符，将可打印字符依次存入数组
	{
		if (isprint(chs[n]) == 0)
			continue;
		n++;
	}										//循环结束时n=字符数
	if (n == 0)
		printf("You entered nothing printable characters.\n");
	else
	{
		printf("The code for your input character is:\n");
		for (i = 0; i < n; i++)
		{
			putchar(chs[i]);
			printf(" -%3d  ", chs[i]);
			if ((i + 1) % 8 == 0)
				putchar('\n');
		}
	}

	return 0;
}