#include<stdio.h>
int main(void)
{
	int year;
	double sec;

	printf("Please enter how old you are: ");
	scanf_s("%d", &year);
	sec = year * 3.156e7;
	printf("There are %e seconds in your years.", sec);

	return 0;
}