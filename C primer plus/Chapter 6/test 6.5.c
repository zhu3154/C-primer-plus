#include<stdio.h>
int main(void)
{
	int i, j;
	char CH, ch;
	int line, column;

	printf("Enter a capital letter:\n");
	scanf_s("%c", &CH,1);

	line = CH - 'A' + 1;
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < line - i - 1; j++)
			printf(" ");
		for (j = 0, ch = 'A'; j <= i; j++)
			printf("%c", ch++);
		for (j = 0, ch -= 2; j < i; j++)
			printf("%c", ch--);
		printf("\n");
	}

	return 0;
}