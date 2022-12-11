#include<stdio.h>
int main(void)
{
	int ch;
	char ch2;

	printf("Please enter an ASC code:");
	scanf_s("%d", &ch);
	ch2 = ch;
	printf("The character for ASC code %d is %c", ch, ch2);

	return 0;

}