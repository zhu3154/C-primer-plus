#include<stdio.h>
int main(void)
{
	int i = 0;	//句号数量
	int j = 0;	//感叹号数量
	char ch;

	printf("Enter some characters(# to quit):\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			i++;
		}
		else if (ch == '!')
		{
			printf("!!");
			j++;
		}
		else
			putchar(ch);
	}
	printf("Number of the period that was replaced: %2d\n", i);
	printf("Number of the replaced exclamation mark: %2d\n", j);

	return 0;
}