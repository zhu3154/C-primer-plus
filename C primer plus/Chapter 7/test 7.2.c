#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int n = 0;	//�����ַ�����
	int i;		//����ַ�����
	char chs[200];

	printf("Enter some characters(# to end input):\n");
	while ((chs[n] = getchar()) != '#')		//�����Ǵ�ӡ�ַ������ɴ�ӡ�ַ����δ�������
	{
		if (isprint(chs[n]) == 0)
			continue;
		n++;
	}										//ѭ������ʱn=�ַ���
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