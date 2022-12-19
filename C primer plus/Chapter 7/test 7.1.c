#include<stdio.h>
int main(void)
{
	char ch;
	int s_ct = 0;	//空格数
	int n_ct = 0;	//换行符数
	int o_ct = 0;	//其他字符数

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