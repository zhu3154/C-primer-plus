#include<stdio.h>
int main(void)
{
	char ch;
	int s_ct = 0;	//�ո���
	int n_ct = 0;	//���з���
	int o_ct = 0;	//�����ַ���

	printf("Enter some characters(# to quit):\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			s_ct++;
		else if (ch == '\n')
			n_ct++;
		else
			o_ct++;
	}
	printf("Space: %d    Line feed: %d    Others: %d",
		s_ct,n_ct,o_ct);

	return 0;
}