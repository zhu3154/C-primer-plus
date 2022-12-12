#include<stdio.h>
int main(void)
{
	int i, j;
	char ch;

	for (i = 0; i < 6; i++)
	{
		ch = 'F';
		for (j = 0; j <= i; j++)
			printf("%c", ch--);
		printf("\n");
	}

	return 0;
}