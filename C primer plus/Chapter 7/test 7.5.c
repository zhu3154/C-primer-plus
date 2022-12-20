#include<stdio.h>
int main(void)
{
	int i = 0;
	int j = 0;
	char ch;

	printf("Enter some characters(# to quit):\n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			putchar('!');
			i++;
			break;
		case '!':
			putchar('!');
			j++;
		default:
			putchar(ch);
			break;
		}
	}
	printf("Number of the period that was replaced: %2d\n", i);
	printf("Number of the replaced exclamation mark: %2d\n", j);

	return 0;
}